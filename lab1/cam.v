module cam (
   input wire [63:0] data,
	input wire [3:0] data_len,
	output wire [2:0] addr,
	output wire valid
);
	// wire declarations
	wire [67:0] data_word;
	
	// data concatenation
	assign data_word = {data_len , data};
	
	wire [67:0] leo, aaron, holly, david, claire, frank, lance, ryan;
	
	assign leo = 68'h3_00000000004F454C;
	assign aaron = 68'h5_0000004E4F524141;
	assign holly = 68'h5_000000594C4C4F48;
	assign david = 68'h5_0000004449564144;
	assign claire = 68'h6_0000455249414C43;
	assign frank = 68'h5_0000004B4E415246;
	assign lance = 68'h5_00000045434E414C;
	assign ryan = 68'h4_000000004E415952;
	
	// 8 equality comparisons
	wire [7:0] entry_matches;
	assign entry_matches = {
									data_word == ryan,
									data_word == lance,									
									data_word == frank,
									data_word == claire,
									data_word == david,
									data_word == holly,
									data_word == aaron,
									data_word == leo};
									
	// encoder instantiation
	encoder enc(.in(entry_matches), .out(addr));
	// valid logic
	assign valid = |(entry_matches);

	always @(data_word) begin
		 //$display("%h",leo);
	end
	
endmodule
