module big_number_first(
    input wire [7:0] aIn, 
	 input wire [7:0] bIn,
	 output wire [7:0] aOut, //bigger 
	 output wire [7:0] bOut //smaller
	 );

	assign aOut = (aIn >= bIn) ? aIn : bIn;
	assign bOut = (aIn >= bIn) ? bIn : aIn;
endmodule
