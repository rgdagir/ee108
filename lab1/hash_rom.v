module hash_rom(input wire [2:0] addr,
						output reg [31:0] data
);

   
	// Module body
	always @(*) begin
		case(addr)
			0 : data = 32'hDC1A2C9E;
			1 : data = 32'hDC2EA8E4;
			2 : data = 32'h355FACC3;
			3 : data = 32'hAAF4ADC9;
			4 : data = 32'h13D41CED;
			5 : data = 32'h7EBCF8A8;
			6 : data = 32'hF3CDDB9B;
			7 : data = 32'h9948E6BE;
			default : data = 32'h000000000;
		endcase
	end
endmodule
