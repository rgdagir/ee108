module lab0_top ( input wire left_pushbutton, input wire right_pushbutton, input wire [3:0] A, input wire [3:0] B, output reg [3:0] out);
	wire [3:0] anded_result;
	wire [3:0] added_result;
	wire [3:0] select;
	
	assign anded_result = A & B;
	assign added_result = A + B;
	assign select = {left_pushbutton, right_pushbutton};
	
	always @(*) begin 
		case (select)
			2'b00: out = 4'b0;
			2'b01: out = added_result;
			2'b10: out = anded_result;
			default: out = added_result;
		endcase
	end
	
endmodule 
