`timescale 1ns / 1ps

module delaybeat( //Delay by 1 beat
	input clk,
	input rst,
	input generate_next, 
	output reg out
   );
	 reg [31:0] next_time;
	 wire [31:0] curr_time;
	 
	 
	 dffr #(.WIDTH(32)) flipflop(.clk(clk), .r(rst), .d(next_time), .q(curr_time));

	 always @(*) begin
		case(curr_time)
			32'd1 : {next_time, out} = {32'd0, 1'b1}; 
			default : {next_time, out} = {curr_time + 1, 1'b0};
		endcase
	 end

endmodule
