`timescale 1ns / 1ps
module timer_tb(
    );
	
	wire out;	
	
	wire count_en;
	reg clk = 0;
   reg[6:0] load_value;
	reg reset = 0;
	beat32 beat_32(.clk(clk), .out(count_en));

	timer timer(.clk(clk), .reset(reset), .load_value(load_value), .count_en(count_en), .out(out));

	always begin
		#5 clk = 1;
      #5 clk = 0;
   end
	
	always begin
		//#100 reset = 1;
		#5 reset = 0;
	end
	
	initial begin
		load_value = 1;
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
		#10 $display("%b", out);
	end

endmodule
