//=============================================================================
// EE108 Lab 2
//
// Top level module. Integrates the various system components.
//=============================================================================

module lab2_top (
    /* clock in */
    //input clk,
    input clk_100,
	 
    /* dvi signals out */
    /*
	 output chip_hsync,
    output chip_vsync,
    output [11:0] chip_data,
    output chip_reset,
    output chip_data_enable,
    output xclk,
    output xclk_n, */
	 
	 /*hdmi signals out*/
	 output hdmi_clock,
	 output hdmi_hsync,
	 output hdmi_vsync,
	 output [15:0] hdmi_d,
	 output hdmi_de, 
	 input hdmi_int, 
	 output hdmi_scl,
    inout hdmi_sda,	 
	 //input [10:0] xpos,
	 //input [9:0] ypos,
	 //input [5:0] rgb, 
	 

    /* user inputs */
    input [8:1] sw,
    input btn_up,
    input btn_left,
    input btn_right,
    input btn_down,

    /* leds out */
    output [3:0] leds
      
    /* I2C */
    //inout  scl,
    //inout  sda
);

    //==========================================================================
    // The floating point addder itself
    //==========================================================================
    wire [7:0] aIn, bIn, result;
    wire [7:0] result_q;
 
    // Instantiate the floating point adder module
    float_add fpa(
        .aIn(aIn),
        .bIn(bIn),
        .result(result)
    );
 
    // Register the outputs so we break up the long critical path through the
    // VGA.  Since this is used by humans we don't care if we delay the result
    // by 10ns.
    dff #(.WIDTH(8)) result_reg (
        .clk (clk_100), 
        .d (result), 
        .q (result_q)
    );

    //=============================================================================
    // Input controls
    //=============================================================================
    wire reset = (btn_left | btn_right);
 
    // Storage for the values.
    dffre #(.WIDTH(8)) ain_reg (
        .clk (clk_100),
        .r   (reset),
        .en  (btn_up),
        .d   (sw),
        .q   (aIn)
    );
    dffre #(.WIDTH(8)) bin_reg (
        .clk (clk_100),
        .r   (reset),
        .en  (btn_down),
        .d   (sw),
        .q   (bIn)
    );

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

    // These signals come from and go to the modules for generating the 
    // VGA timing (sync) signals
    wire [10:0] x;  // [0..1279]
    wire [10:0] y;  // [0..1023]     
    wire [10:0] x_q;
    wire [10:0] y_q;	 
	 
    // Composite RGB signal
    wire [5:0] vga_rgb;
	 wire [5:0] rgb_q;
         
    // VGA Colors
    wire [7:0] r = {4{rgb_q [5:4]}};
    wire [7:0] g = {4{rgb_q [3:2]}};
    wire [7:0] b = {4{rgb_q [1:0]}};
    
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
	 
	 always @ (posedge clk_100) begin  
		  ye [7:0] = (yeblah_q[20]) ? 0 : ( (yeblah_q >= 20'hFFFFF)? 10'h3FF: yeblah_q[19:10] );
		  cb [7:0] = (cbblah_q[20]) ? 0 : ( (cbblah_q >= 20'hFFFFF)? 10'h3FF: cbblah_q[19:10] );
		  cr [7:0] = (crblah_q[20]) ? 0 : ( (cbblah_q >= 20'hFFFFF)? 10'h3FF: crblah_q[19:10] );
		  converted = {ye,cb,cr};
	 end 
	
	 reg [23:0] converted;
    //assign converted = {ye,cb,cr};	

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
			 .xpos (x),
			 .ypos (y),
			 .ycbcr (converted) 
    );			 
    
	 dff #(.WIDTH (11)) x_dff (
        .clk (clk_100),
        .d (x),
        .q (x_q)
		  );
 
	 dff #(.WIDTH (11)) y_dff (
        .clk (clk_100),
        .d (y),
        .q (y_q)
		  );
		  
    //dvi_controller_top ctrl(
    //    .clk    (clk),
    //    .enable (1'b1),
    //    .reset  (reset),
    //    .r      (r),
    //    .g      (g),
    //    .b      (b),

    //    .chip_data_enable (chip_data_enable),
    //    .chip_hsync       (chip_hsync),
    //    .chip_vsync       (chip_vsync),
    //    .chip_reset       (chip_reset),
    //    .chip_data        (chip_data),
    //    .xclk             (xclk),
    //    .xclk_n           (xclk_n),
    //    .x                (x),
    //    .y                (y)
    //);
 
    // Display Driver
    fpa_vga_driver fpa_vga (
        .clk     (clk_100),
        .XPos    (x_q),
        .YPos    (y_q),

        .aIn     (aIn),
        .bIn     (bIn),
        .result  (result_q),

        .Valid   (1'b1),

        .vga_rgb (vga_rgb)
    );
 
    	 dff #(.WIDTH (6)) rgb_dff (
        .clk (clk_100),
        .d (vga_rgb),
        .q (rgb_q)
		  );
    // I2C controller to configure dvi interface
   /* i2c_emulator i2c_controller(
        .clk (clk),
        .rst (reset),

        .scl (scl),
        .sda (sda)
    );*/

endmodule

