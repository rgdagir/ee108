module rotator #(parameter WIDTH = 8)(
   input wire [WIDTH-1:0] in,
	input wire direction,
	input wire [7:0] distance,
	output reg [WIDTH-1:0] out
);

	// Declarations
	wire [WIDTH * 2 - 1 : 0] double_rot_l, double_rot_r, double_in;
	wire [WIDTH-1:0] rot_l, rot_r; 
	
	// Rotating logic
	assign double_in = {in, in};
	assign double_rot_l = double_in << distance;
	assign double_rot_r = double_in >> distance;
	
	assign rot_l = double_rot_l[WIDTH*2-1:WIDTH];
	assign rot_r = double_rot_r[WIDTH-1:0];
	
	
	// Output mux logic
	//Muxb2 #(WIDTH) m(rot_l, rot_r, direction, out);
	always @(*) begin
		if(direction == 0)
			out = rot_r;
		else
			out = rot_l;
	end
endmodule
