module arbiter (input wire [7:0] in,
					 output reg [7:0] out);
   
	// module body goes here
	always @(*) begin
		casex(in)
			8'bxxxxxxx1 : out = 8'b00000001;
			8'bxxxxxx10 : out = 8'b00000010;
			8'bxxxxx100 : out = 8'b00000100;
			8'bxxxx1000 : out = 8'b00001000;
			8'bxxx10000 : out = 8'b00010000;
			8'bxx100000 : out = 8'b00100000;
			8'bx1000000 : out = 8'b01000000;
			8'b10000000 : out = 8'b10000000;
			default: out = 8'b00000000;	
		endcase
	end
	
endmodule
