`timescale 1ns / 1ps

module shifter_tb();
	reg clk, shift_left, shift_right;
	reg reset = 0;
	wire [6:0] fast_out, slow_out;
	
	shifter #(1) fast_shifter (.clk(clk), .reset(reset), .shift_left(shift_left), .shift_right(shift_right), .out(fast_out));
	shifter #(0) slow_shifter (.clk(clk), .reset(reset), .shift_left(shift_left), .shift_right(shift_right), .out(slow_out));

	always begin
		// setting the period for the clock
		#5 clk = 1;
		#2 $display("Slow shifter output is %b", slow_out); $display("Fast shifter output is %b", fast_out);
      #3 clk = 0;
   end
	always begin
		#45 reset = 1;
		#5 reset =0;
   end
	
	initial begin
		// setting up the test cases
		// note that the shifter starts with value 0001000 
		
		// single shift left
		reset = 1;
		#5 reset = 0;
		#5 shift_left = 1; shift_right = 0;
		
		// single shift right
		#10 shift_left = 0; shift_right = 1;
		
		// shifting left and right at the same time 
		#10 shift_right = 1; shift_left = 1; 
		
		// no shifting
		#10 shift_left = 0; shift_right = 0;
		
		// successive right shifts
		#10 shift_left = 0; shift_right = 1;
		#10 shift_left = 0; shift_right = 1;
		#10 shift_left = 0; shift_right = 1;
		
		// successive left shifts
		#10 shift_left = 1; shift_right = 0;
		#10 shift_left = 1; shift_right = 0;
		#10 shift_left = 1; shift_right = 0;
		#10 shift_left = 1; shift_right = 0;
		#10 shift_left = 1; shift_right = 0;
		#10 shift_left = 1; shift_right = 0;
		#10 shift_left = 1; shift_right = 0;
	
	end
	
endmodule
