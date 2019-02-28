module hash_round #(parameter ROUND=0)(
   input wire [31:0] in_state,
	input wire [7:0] in_byte,
	output wire [31:0] out_state
);
   
	// Declarations
	wire [7:0] a, b, c, d;
	
	// State splitting
	assign {d, c, b, a} = in_state;
	
	// Mix function
	reg [7:0] mix_out;
	
	always @(*) begin
		case(ROUND)
				0, 1, 2 : mix_out = (c & b) | (~b & d);
				3, 4 : mix_out = (c & b) | (b & d) | (c & d);
				default : mix_out = b ^ c ^ d; 
		endcase
	end
	
	wire [7:0] mixed_a = mix_out + a + in_byte;
	
	// Rotator
	wire [7:0] rotated_mixed_a;
	
	rotator #(8) roty(.in(mixed_a), .direction(1'b1), .distance(ROUND[7:0]), .out(rotated_mixed_a));
	
	// Output state assignment
	assign out_state = {c, b, rotated_mixed_a, d};

endmodule
