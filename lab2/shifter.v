
module shifter( input wire [4:0] in,
					 input wire [2:0] distance,
					 input wire direction,
					 output wire [4:0] out);
					 
	assign out = direction ? (in << distance): (in >> distance);


endmodule
