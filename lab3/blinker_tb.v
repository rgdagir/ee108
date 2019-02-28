`timescale 1ns / 1ps

module blinker_tb();
	 reg clk;
    reg switch =0;
	 reg reset = 1;
	 reg en = 0;
    wire out;
	 
	 blinker blnk(.clk(clk), .reset(reset), .en(en), .switch(switch), .out(out));
	 
	 // setting period of clock
	 always begin
		#5 clk = 1;
      #5 clk = 0;
    end
	 
	 always begin
		#10 en = 1;
      #10 en = 0;
    end
	 
	 always begin
		#100 reset = 1;
		#10 reset = 0;
    end
	 
	 // setting test cases
	 initial begin
		#5 $display("%b", out); reset = 0;
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 0;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 0;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 0;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 0;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 0;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 0;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);
		#5 switch = 1;
		#5 $display("%b", out);

	end
endmodule
