`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

// Engineer: Barry Log

//////////////////////////////////////////////////////////////////////////////////

module beat32_tb();
	
	reg clk;
	wire out;
	reg reset;
	beat32 bt(.clk(clk), .rst(reset), .out(out));
	
	always begin
		#5 clk = 1;
      #5 clk = 0;
   end
	
	always begin
		#40 reset = 1; 
		#5 reset = 0;
   end
	 
	 initial begin
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		#5 $display("%b", out);
		$finish;
	 end
	 
	
endmodule
