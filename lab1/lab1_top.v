`include "ff_lib.v"

module lab1_top (
   // System signals
   //input clk,
	input clk_100,
   //(for now) input rst,

   // User interface
   input  left_button,
   input  right_button,
   input  up_button,
   input  down_button,
   input  center_button,
	

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
    output [3:0] leds

);
  
   /// Verifier module ////////////////////////////////////////////////////////
   wire [63:0] username, password;
   wire valid;
  
   // Hey, here's your work!
   verifier user_verifier (
      .username(username),
      .password(password),
      .valid(valid)
   );
   
   // Blackboxed interface module
   lab1_interface interface (
      // System signals
      .clk_100(clk_100),
      //.rst(rst),
   
      // Password verifier interface
      .username(username),
      .password(password),
      .valid(valid),

      // User interface
      .left_button (left_button),
      .right_button (right_button),
      .up_button (up_button),
      .down_button (down_button),
      .center_button (center_button),

	//Replacing with HDMI stuff
		/*hdmi signals out*/
		 .hdmi_clock (hdmi_clock),
		 .hdmi_hsync (hdmi_hsync),
		 .hdmi_vsync (hdmi_vsync),
		 .hdmi_d  (hdmi_d),
		 .hdmi_de (hdmi_de), 
		 .hdmi_int (hdmi_int), 
		 .hdmi_scl (hdmi_scl),
		 .hdmi_sda (hdmi_sda),	 
	 
		 .leds(leds)
   );
   
   
endmodule

