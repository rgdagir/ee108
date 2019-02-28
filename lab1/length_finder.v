
module length_finder (
		input wire [63:0] string,
		output wire [3:0] length
);
   
	// wire declarations
	wire one = ~(|(string[7:0]));
	wire two = ~(|(string[15:8]));
	wire three = ~(|(string[23:16]));
	wire four = ~(|(string[31:24]));
	wire five = ~(|(string[39:32]));
	wire six = ~(|(string[47:40]));
	wire seven = ~(|(string[55:48]));
	wire eight = ~(|(string[63:56]));
	
	// is_character_null logic (8 lines of it!)
	wire [7:0] is_character_null = {eight, seven, six, five, four, three, two, one};
	
	// arbiter
	wire [7:0] arb_out;
	arbiter arbies(.in(is_character_null), .out(arb_out));
	
	wire [2:0] enc_out;
	encoder encode(.in(arb_out), .out(enc_out));	

	wire comp_out;
	assign comp_out = (8'b0 == is_character_null);
	
	assign length = {comp_out, enc_out};
endmodule
