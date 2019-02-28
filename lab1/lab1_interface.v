
`include "dvi_defines.v"

module lab1_interface (
   // System signals
   input clk_100,

   
   // Password verifier interface
   output reg [63:0] username,
   output reg [63:0] password,
   input valid,

   // User interface
   input  left_button,
   input  right_button,
   input  up_button,
   input  down_button,
   input  center_button,
	input [8:1] sw,


 /*hdmi signals out*/
	 output hdmi_clock,
	 output hdmi_hsync,
	 output hdmi_vsync,
	 output [15:0] hdmi_d,
	 output hdmi_de, 
	 input hdmi_int, 
	 output hdmi_scl,
    inout hdmi_sda,	 
	 
	     /* leds out */
    output [5:0] leds
);


//assign valid = 1; 
    //==========================================================================
    // Display management -> do not touch!
    //==========================================================================
    /* blinking leds to show life */
    wire [26:0] led_counter;

    dff #(.WIDTH (27)) led_div (
        .clk (clk_100),
        .d (led_counter + 27'd1),
        .q (led_counter)
    );
    assign leds = led_counter[26:23];
  
	 wire [20:0] yeblah;
	 wire [20:0] cbblah; 
	 wire [20:0] crblah; 
	 
	 wire [20:0] yeblah_q;
	 wire [20:0] cbblah_q; 
	 wire [20:0] crblah_q; 
	 
    assign yeblah = 63*b + 629*g + 187*r + 16384; //multiply by 1024 
    assign cbblah = 450*b - 347*g - 103*r + 131072;	 
	 assign crblah = -41*b -409*g +450*r + 131072; 
	 
	 dff #(.WIDTH (21)) ye_dff (
        .clk (clk_100),
        .d (yeblah),
        .q (yeblah_q)	 
    );
		  
    dff #(.WIDTH (21)) cb_dff (
        .clk (clk_100),
        .d (cbblah),
        .q (cbblah_q)
    );
		  
	 dff #(.WIDTH (21)) cr_dff (
        .clk (clk_100),
        .d (crblah),
        .q (crblah_q)
	 );

	 reg [7:0] ye;
	 reg [7:0] cb; 
	 reg [7:0] cr; 
	 reg [23:0] converted;
	 
	 always @ (posedge clk_100) begin  
		  ye [7:0] <= (yeblah_q[20]) ? 0 : ( (yeblah_q >= 20'hFFFFF)? 10'h3FF: yeblah_q[19:10] );
		  cb [7:0] <= (cbblah_q[20]) ? 0 : ( (cbblah_q >= 20'hFFFFF)? 10'h3FF: cbblah_q[19:10] );
		  cr [7:0] <= (crblah_q[20]) ? 0 : ( (cbblah_q >= 20'hFFFFF)? 10'h3FF: crblah_q[19:10] );
		  converted <= {ye,cb,cr};
	 end 


   /// DVI controller boilerplate /////////////////////////////////////////////

   wire [`log2NUM_COLS-1:0] x_q;
   wire [`log2NUM_ROWS-1:0] y_q;
	
   wire [`log2NUM_COLS-1:0] x;
	assign x = {1'b0, x_q[`log2NUM_COLS-1:1]};
	
   wire [`log2NUM_ROWS-1:0] y;
	assign y = {1'b0, y_q[`log2NUM_ROWS-1:1]};

	wire [10:0] true_x;
	wire [10:0] true_y; 
	
    //HDMI Controller 
	 zedboard_hdmi hdmi (
			 .clk_100 (clk_100),
			 .hdmi_clk (hdmi_clock), 
			 .hdmi_hsync (hdmi_hsync),
	       .hdmi_vsync (hdmi_vsync), 
	       .hdmi_d (hdmi_d), 
	       .hdmi_de (hdmi_de),  
	       .hdmi_int (hdmi_int), 
	       .hdmi_scl (hdmi_scl), 
          .hdmi_sda (hdmi_sda),
			 .xpos (true_x),
			 .ypos (true_y),
			 .ycbcr (converted) 
    );			 
    
	
	 
	 dff #(.WIDTH (11)) x_dff (
        .clk (clk_100),
        .d (true_x),
        .q (x_q)
		  );
 
	 dff #(.WIDTH (11)) y_dff (
        .clk (clk_100),
        .d (true_y),
        .q (y_q)
		  );
		  
	  
//END of HDMI Stuff


   /// Input sanitization boilerplate /////////////////////////////////////////
   parameter BPU_WIDTH = 20;
   wire conditioned_left, conditioned_right;
   wire conditioned_up, conditioned_down;
   wire conditioned_center, conditioned_rot_inca, conditioned_rot_incb;

   button_press_unit #(.WIDTH(BPU_WIDTH)) bpu1(
      .clk(clk_100),
      .reset(rst),
      .in(left_button),
      .out(conditioned_left)
   );

   button_press_unit #(.WIDTH(BPU_WIDTH)) bpu2(
      .clk(clk_100),
      .reset(rst),
      .in(right_button),
      .out(conditioned_right)
   );
   
   button_press_unit #(.WIDTH(BPU_WIDTH)) bpu3(
      .clk(clk_100),
      .reset(rst),
      .in(up_button),
      .out(conditioned_up)
   );
   
   button_press_unit #(.WIDTH(BPU_WIDTH)) bpu4(
      .clk(clk_100),
      .reset(rst),
      .in(down_button),
      .out(conditioned_down)
   );
   
   button_press_unit #(.WIDTH(BPU_WIDTH)) bpu5(
      .clk(clk_100),
      .reset(rst),
      .in(center_button),
      .out(conditioned_center)
   );

	/* Rotary encoder replace with DIP switches */ 
	wire transition_1;
	wire transition_2;
	
	assign transition_1 = (sw[8:1]) ? 0 : up_button;
	assign transition_2 = (sw[8:1]) ? 0 : down_button;
	//assign leds[4] = transition_1;
	//assign leds[5] = transition_2;
	
	one_pulse char_up_pulser (.clk(clk_100), .reset(rst), .in(transition_1), .out(char_up));
	one_pulse char_dn_pulser (.clk(clk_100), .reset(rst), .in(transition_2), .out(char_dn)); 
	

   
   reg focus;
   
   wire [63:0] username_tmp;
   wire [63:0] password_tmp;

   wire [7:0] r_1, g_1, b_1;
   wire [7:0] r_2, g_2, b_2;
   wire [7:0] r_3, g_3, b_3;
	
	wire [7:0] r, g, b; 
   
   input_box usr_box (
      .clk(clk_100),
      .rst(rst),
      
      .left_button(conditioned_left),
      .right_button(conditioned_right),
      .char_up(char_up),
      .char_dn(0),
      .en(focus==0),
      
      .value(username_tmp),
      
      .x(x-16),
      .y(y-24),
      .r(r_1),
      .g(g_1),
      .b(b_1)
   );
   
   input_box pass_box (
      .clk(clk_100),
      .rst(rst),
      
      .left_button(conditioned_left),
      .right_button(conditioned_right),
      .char_up(0),
      .char_dn(char_dn),
      .en(focus==1),
      
      .value(password_tmp),
      
      .x(x-16),
      .y(y-48),
      .r(r_2),
      .g(g_2),
      .b(b_2)
   );

   always @(posedge clk_100) begin
      if (rst) begin
         focus <= 2'b0;
      end else begin
         if (conditioned_up) begin
            focus <= 0;
         end else if (conditioned_down) begin
            focus <= 1;
         end
      end
   end

   always @(posedge clk_100) begin
      if (rst) begin
         username <= 64'b0;
         password <= 64'b0;
      end else begin
         if (conditioned_center) begin
            username <= username_tmp;
            password <= password_tmp;
         end
      end
   end
   
   /// Extra display logic ////////////////////////////////////////////////////
   
   reg valid_flopped;
   always @(posedge clk_100) begin
		valid_flopped <= valid;
	end
   
   reg [8:0] rom_base_addr;
   wire [8:0] rom_addr;
	
	assign rom_addr = rom_base_addr + y[2:0];
   wire [7:0] rom_data;
	
   tcgrom char_rom (.addr(rom_addr), .data(rom_data));

   reg [1:0] color;

   always @(*) begin
      if (y>=16 && y<24) begin
         color = 2'd0;
         case (x[`log2NUM_COLS-1:3])
            2: rom_base_addr = (9'd21 << 3); // U
            3: rom_base_addr = (9'd19 << 3); // S
            4: rom_base_addr = (9'd05 << 3); // E
            5: rom_base_addr = (9'd18 << 3); // R
            6: rom_base_addr = (9'd14 << 3); // N
            7: rom_base_addr = (9'd01 << 3); // A
            8: rom_base_addr = (9'd13 << 3); // M
            9: rom_base_addr = (9'd05 << 3); // E
            10: rom_base_addr = (9'd39 << 3); // :
            default: rom_base_addr = 9'h100;
         endcase
      end else if (y>=40 && y<48) begin
         color = 2'd0;
         case (x[`log2NUM_COLS-1:3])
            2: rom_base_addr = (9'd16 << 3); // P
            3: rom_base_addr = (9'd01 << 3); // A
            4: rom_base_addr = (9'd19 << 3); // S
            5: rom_base_addr = (9'd19 << 3); // S
            6: rom_base_addr = (9'd23 << 3); // W
            7: rom_base_addr = (9'd15 << 3); // O
            8: rom_base_addr = (9'd18 << 3); // R
            9: rom_base_addr = (9'd04 << 3); // D
            10: rom_base_addr = (9'd39 << 3); // :
            default: rom_base_addr = 9'h100;
         endcase
      end else if (y>=64 && y<71) begin
         if (username==64'b0 && password==64'b0 ) begin
            color = 2'd0;
            rom_base_addr = 9'h100;
         end else if (valid_flopped) begin
            color = 2'd1;
            case (x[`log2NUM_COLS-1:3])
               2: rom_base_addr = (9'd16 << 3); // P
               3: rom_base_addr = (9'd01 << 3); // A
               4: rom_base_addr = (9'd19 << 3); // S
               5: rom_base_addr = (9'd19 << 3); // S
               6: rom_base_addr = (9'd23 << 3); // W
               7: rom_base_addr = (9'd15 << 3); // O
               8: rom_base_addr = (9'd18 << 3); // R
               9: rom_base_addr = (9'd04 << 3); // D
               10: rom_base_addr = 9'h100; //  
               11: rom_base_addr = (9'd22 << 3); // V
               12: rom_base_addr = (9'd01 << 3); // A
               13: rom_base_addr = (9'd12 << 3); // L
               14: rom_base_addr = (9'd09 << 3); // I
               15: rom_base_addr = (9'd04 << 3); // D
               16: rom_base_addr = (9'd33 << 3); // !
               default: rom_base_addr = 9'h100;
            endcase
         end else begin
            color = 2'd2;
            case (x[`log2NUM_COLS-1:3])
               2: rom_base_addr = (9'd16 << 3); // P
               3: rom_base_addr = (9'd01 << 3); // A
               4: rom_base_addr = (9'd19 << 3); // S
               5: rom_base_addr = (9'd19 << 3); // S
               6: rom_base_addr = (9'd23 << 3); // W
               7: rom_base_addr = (9'd15 << 3); // O
               8: rom_base_addr = (9'd18 << 3); // R
               9: rom_base_addr = (9'd04 << 3); // D
               10: rom_base_addr = 9'h100; //  
               11: rom_base_addr = (9'd09 << 3); // I
               12: rom_base_addr = (9'd14 << 3); // N
               13: rom_base_addr = (9'd22 << 3); // V
               14: rom_base_addr = (9'd01 << 3); // A
               15: rom_base_addr = (9'd12 << 3); // L
               16: rom_base_addr = (9'd09 << 3); // I
               17: rom_base_addr = (9'd04 << 3); // D
               18: rom_base_addr = (9'd33 << 3); // !
               19: rom_base_addr = (9'd33 << 3); // !
               default: rom_base_addr = 9'h100;
            endcase
         end
      end else begin
         color = 2'd0;
         rom_base_addr = 9'h100;
      end
   end
   
   wire [7:0] rom_bit_select; 
	assign rom_bit_select = 8'b10000000 >> x[2:0];
	
   wire char_px; 
	assign char_px = |(rom_data & rom_bit_select);
   
   assign r_3 = char_px & (color==2'd0 || color==2'd2) ? 8'hFF : 8'h00;
   assign g_3 = char_px & (color==2'd0 || color==2'd1) ? 8'hFF : 8'h00;
   assign b_3 = char_px & (color==2'd0) ? 8'hFF : 8'h00;

   assign r = r_1 | r_2 | r_3;
   assign g = g_1 | g_2 | g_3;
   assign b = b_1 | b_2 | b_3;
   
   
endmodule
