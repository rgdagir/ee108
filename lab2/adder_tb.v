`timescale 1ns / 1ps
module adder_tb();

reg [4:0] a;
reg [4:0] b;
wire [4:0] sum;
wire cout;

adder add(.a(a), .b(b), .sum(sum), .cout(cout));

initial begin 
	// Testing for overflow
	a = 5'b10000;	
	b = 5'b10000;
	#5
	$display("Output is %b and carry is %b, we expected %b and %b", sum, cout, 5'b00000, 1'b1);
	
	// Testing overflow
	a = 5'b11111;	
	b = 5'b11111;
	#5
	$display("Output is %b and carry is %b, we expected %b and %b", sum, cout, 5'b11110, 1'b1);

	// Testing overflow
	a = 5'b11111;	
	b = 5'b00001;
	#5
	$display("Output is %b and carry is %b, we expected %b and %b", sum, cout, 5'b00000, 1'b1);
	
	// Testing normal functionality
	a = 5'b10101;	
	b = 5'b01010;
	#5
	$display("Output is %b and carry is %b, we expected %b and %b", sum, cout, 5'b11111, 1'b0);

	// Testing normal functionality
	a = 5'b00011;	
	b = 5'b00011;
	#5
	$display("Output is %b and carry is %b, we expected %b and %b", sum, cout, 5'b00110, 1'b0);
	
	// Testing normal functionality
	a = 5'b10000;	
	b = 5'b00000;
	#5
	$display("Output is %b and carry is %b, we expected %b and %b", sum, cout, 5'b10000, 1'b0);

end


endmodule
