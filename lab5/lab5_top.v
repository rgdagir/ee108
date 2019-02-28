module lab5_top(
    /*
	 'define H_SYNC_PULSE 112
	 'define H_BACK_PORCH 248
	 'define H_FRONT_PORCH 48
	 'define V_SYNC_PULSE 3
	 'define V_BACK_PORCH 38
	 'define V_FRONT_PORCH 1
*/ 	 
	 
	 // Clock
    input clk_100,
	 
	 
    // ADAU_1761 interface
    output  AC_ADR0,            // I2C Address pin (DO NOT CHANGE)
    output  AC_ADR1,            // I2C Address pin (DO NOT CHANGE)

    output  AC_GPIO0,           // I2S Signals
    input   AC_GPIO1,           // I2S Signals
    input   AC_GPIO2,           // I2S Byte Clock
    input   AC_GPIO3,           // I2S Channel Clock

    output  AC_MCLK,            // Master clock (48MHz)
    output  AC_SCK,             // I2C SCK
    inout   AC_SDA,             // I2C SDA 

    // LEDs
    output wire [3:0] leds_l,
    output wire [3:0] leds_r,
    // DVI Interface
    
    // I2C
    output HDMI_SCL,
    inout  HDMI_SDA,
	 
	 output hdmi_clk,
	 output hdmi_hsync,
	 output hdmi_vsync,
	 output [15:0] hdmi_d,
	 output hdmi_de, 
	 // input hdmi_int, 
	 
	 // input [8:1] sw,
    input btn_up,
    input btn_left,
    input btn_right,
    input btn_down,

    output [3:0] VGA_R,
    output [3:0] VGA_G,
    output [3:0] VGA_B,
    output VGA_HS,
    output VGA_VS
);  
    // button_press_unit's WIDTH parameter is exposed here so that you can
    // reduce it in simulation.  Setting it to 1 effectively disables it.
    parameter BPU_WIDTH = 20;
    // The BEAT_COUNT is parameterized so you can reduce this in simulation.
    // If you reduce this to 100 your simulation will be 10x faster.
    parameter BEAT_COUNT = 1000;

    // Our reset
    wire reset = btn_up;
   
    // These signals are for determining which color to display
    wire [11:0] x;  // [0..1279]
    wire [11:0]  y;  // [0..1023]   
    wire [11:0] x_q;
    wire [11:0] y_q; 	 
    // Color to display at the given x,y
    wire [7:0]  r, g, b;
    wire [7:0] r_1, g_1, b_1;
 
//   
//  ****************************************************************************
//      Button processor units
//  ****************************************************************************
//  
    wire play;
    button_press_unit #(.WIDTH(BPU_WIDTH)) play_button_press_unit(
        .clk(clk_100),
        .reset(reset),
        .in(btn_left),
        .out(play)
    );

    wire next;
    button_press_unit #(.WIDTH(BPU_WIDTH)) next_button_press_unit(
        .clk(clk_100),
        .reset(reset),
        .in(btn_right),
        .out(next)
    );
       
//   
//  ****************************************************************************
//      The music player
//  ****************************************************************************
//       
    wire new_frame;
    wire [15:0] codec_sample, flopped_sample;
    wire new_sample, flopped_new_sample;
    music_player #(.BEAT_COUNT(BEAT_COUNT)) music_player(
        .clk(clk_100),
        .reset(reset),
        .play_button(play),
        .next_button(next),
        .new_frame(new_frame), 
        .sample_out(codec_sample),
        .new_sample_generated(new_sample)
    );
    dff #(.WIDTH(17)) sample_reg (
        .clk(clk_100),
        .d({new_sample, codec_sample}),
        .q({flopped_new_sample, flopped_sample})
    );

//   
//  ****************************************************************************
//      Codec interface
//  ****************************************************************************
//  

   wire [23:0] hphone_r = 0;
	wire [23:0] line_in_l = 0;  
	wire [23:0] line_in_r =  0; 
	
    // Output the sample onto the LEDs for the fun of it.
    // assign leds_l = codec_sample[15:12];
    assign leds_r = codec_sample[15:12];

    adau1761_codec adau1761_codec(
        .clk_100(clk_100),
        .reset(reset),
        .AC_ADR0(AC_ADR0),
        .AC_ADR1(AC_ADR1),
        .I2S_MISO(AC_GPIO0),
        .I2S_MOSI(AC_GPIO1),
        .I2S_bclk(AC_GPIO2),
        .I2S_LR(AC_GPIO3),
        .AC_MCLK(AC_MCLK),
        .AC_SCK(AC_SCK),
        .AC_SDA(AC_SDA),
        .hphone_l({codec_sample, 8'h00}),
        .hphone_r(hphone_r),
        .line_in_l(line_in_l),
        .line_in_r(line_in_r),
        .new_sample(new_frame)
    );  
    
//   
//  ****************************************************************************
//      Display management
//  ****************************************************************************
//  
    /* blinking leds to show life */
    wire [26:0] led_counter;

    dff #(.WIDTH (27)) led_div (
        .clk (clk_100),
        .d (led_counter + 27'd1),
        .q (led_counter)
    );
    assign leds_l = led_counter[26:23];
 
    //==========================================================================
    // Display management -> do not touch!
    //==========================================================================
	 
	 wire valid;
     wire valid_d; 
	 
	 
    vga_hdmi hdmi(
        .clk_100(clk_100),
        .color({r_1, g_1, b_1}),
        .vga_r(VGA_R),
        .vga_b(VGA_B),
        .vga_g(VGA_G),
        .vga_hs(VGA_HS),
        .vga_vs(VGA_VS),
        .hdmi_clk (hdmi_clk), 
          .hdmi_hsync (hdmi_hsync),
           .hdmi_vsync (hdmi_vsync), 
           .hdmi_d (hdmi_d), 
           .hdmi_de (hdmi_de),  
           .hdmi_scl (HDMI_SCL), 
           .xpos(x),
           .ypos(y),
           // .valid(valid_d),
           .valid(valid),
          .hdmi_sda (HDMI_SDA));
    
	 // dff #(.WIDTH (12)) x_dff (
  //       .clk (clk_100),
  //       .d (x),
  //       .q (x_q)
		//   );
 
	 // dff #(.WIDTH (12)) y_dff (
  //       .clk (clk_100),
  //       .d (y),
  //       .q (y_q)
		//   );

  //    dff valid_dff(
  //       .clk(clk_100),
  //       .d(valid_d),
  //       .q(valid));
		  
    wave_display_top wd_top (
		.clk (clk_100),
		.reset (reset),
		.new_sample (new_sample),
		.sample (flopped_sample),
		// .x(x_q[10:0]),
		// .y(y_q[9:0]),
        .x(x[10:0]),
        .y(y[9:0]),
		.valid(valid),
		.vsync(hdmi_vsync),
		.r(r_1),
		.g(g_1),
		.b(b_1) 
    );
    
    // dff #(.WIDTH (8)) r_flop (
    //     .clk(clk_100),
    //     .d(r_1),
    //     .q(r));

    // dff #(.WIDTH (8)) g_flop (
    //     .clk(clk_100),
    //     .d(g_1),
    //     .q(g));

    // dff #(.WIDTH (8)) b_flop (
    //     .clk(clk_100),
    //     .d(b_1),
    //     .q(b));

endmodule

