`timescale 1ns / 1ps

module beat_generator_tb(
    );
	reg clk;
	reg reset;
	reg en;
	wire beat;

	beat_generator beaty_gen (.clk(clk), .reset(reset), .en(en), .beat(beat));

	always begin
		#1 clk = 1;
		#1 clk = 0;
		en = 1;
	end	
	
	initial begin
		#2 reset = 1;
		#2 reset = 0;
	end


endmodule
