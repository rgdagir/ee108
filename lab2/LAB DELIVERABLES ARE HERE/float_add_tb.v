`timescale 1ns / 1ps
module float_add_tb();
	reg [7:0] aIn;
	reg [7:0] bIn;
	wire [7:0] result;
	
	float_add f_add(.aIn(aIn), .bIn(bIn), .result(result));
	
	initial begin
		//Test cases: Regular addition
		aIn = 8'b00001000;	
		bIn = 8'b00000011;
		#5
		$display("Output is %b, we expected %b", result, 8'b00001011);
	
		aIn = 8'b00110001;	
		bIn = 8'b00001100;
		#5
		$display("Output is %b, we expected %b", result, 8'b00110111); 
		aIn = 8'b10010010;	
		bIn = 8'b01011111;
		#5
		$display("Output is %b, we expected %b", result, 8'b10011001);
		
		aIn = 8'b11111110;	
		bIn = 8'b11000010;
		#5
		$display("Output is %b, we expected %b", result, 8'b11111111);
		
		aIn = 8'b00111111;	
		bIn = 8'b00000001;
		#5
		$display("Output is %b, we expected %b", result, 8'b00111111);
		
		//Test cases: Saturation
		aIn = 8'b11111110;	
		bIn = 8'b11111000;
		#5
		$display("Output is %b, we expected %b", result, 8'b11111111);

		aIn = 8'b11111110;	
		bIn = 8'b11100010;
		#5
		$display("Output is %b, we expected %b", result, 8'b11111111);
		
		aIn = 8'b11111110;	
		bIn = 8'b11000011;
		#5
		$display("Output is %b, we expected %b", result, 8'b11111111);

		//Test cases: Overflow		
		aIn = 8'b00011111;	
		bIn = 8'b00011111;
		#5
		$display("Output is %b, we expected %b", result, 8'b00111111);

		aIn = 8'b00011111;	
		bIn = 8'b00000001;
		#5
		$display("Output is %b, we expected %b", result, 8'b00110000);

		aIn = 8'b00011110;	
		bIn = 8'b00000011;
		#5
		$display("Output is %b, we expected %b", result, 8'b00110000);			
	end
	


endmodule
