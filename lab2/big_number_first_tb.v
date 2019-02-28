`timescale 1ns / 1ps
module big_number_first_tb();
	reg [7:0] aIn;
	reg [7:0] bIn;
	wire [7:0] aOut;
	wire [7:0] bOut;
	big_number_first bnf(.aIn(aIn), .bIn(bIn) ,.aOut(aOut),.bOut(bOut));
	
	// Testing normal functionality
	initial begin
   aIn = 8'b10000000;	
	bIn = 8'b00100000;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b10000000);
	
	// Testing case when both inputs are equal
	aIn = 8'b11000000;	
	bIn = 8'b11000000;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b11000000);
	
	// Testing all zeroes
	aIn = 8'b00000000;	
	bIn = 8'b00000000;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b00000000);
		// Testing case in which one of the inputs is not one-hot
	aIn = 8'b10000000;	
	bIn = 8'b10000011;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b10000011);
	
	//Normalized inputs
	aIn = 8'b00001000;	
	bIn = 8'b00111111;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b00111111);
	
	// Testing normal functionality
	aIn = 8'b10010001;	
	bIn = 8'b10010000;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b10010001); 
	// Testing normal functionality
	aIn = 8'b01100000;	
	bIn = 8'b01100011;
	#5
	$display("Output is %b, we expected %b", aOut, 8'b01100011);
	end


endmodule
