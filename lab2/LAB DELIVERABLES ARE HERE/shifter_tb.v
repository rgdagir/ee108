`timescale 1ns / 1ps

module shifter_tb();
	reg [4:0] in;
	reg [2:0] distance;
	reg direction;
	wire [4:0] out;
	shifter shift(.in(in), .distance(distance), .direction(direction), .out(out));
	initial begin

		in = 5'b00001;
		distance = 5'b00011;
		direction = 1'b00001;
		#5
		$display("Output is %b, we expected %b", out, 5'b01000);
		// Testing normal functionality
		in = 5'b00001;
		distance = 5'b00011;
		direction = 1'b0;
		#5
		$display("Output is %b, we expected %b", out, 5'b00000);
		// Testing normal functionality
		in = 5'b00100;
		distance = 5'b00010;
		direction = 1'b00001;
		#5
		$display("Output is %b, we expected %b", out, 5'b10000);
		// Testing normal functionality
		in = 5'b00100;
		distance = 5'b00001;
		direction = 1'b0;
		#5
		$display("Output is %b, we expected %b", out, 5'b00010);
		// Testing normal functionality
		in = 5'b01010;
		distance = 5'b00010;
		direction = 1'b00001;
		#5
		$display("Output is %b, we expected %b", out, 5'b01000);
		// Testing normal functionality
		in = 5'b11111;
		distance = 5'b00011;
		direction = 1'b0;
		#5
		$display("Output is %b, we expected %b", out, 5'b00011);
		
	end
	

endmodule
