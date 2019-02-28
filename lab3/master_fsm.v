`define OFF_1 3'b000
`define ON 3'b001
`define OFF_2 3'b010
`define FLASH_1 3'b011
`define OFF_3 3'b100
`define FLASH_2 3'b101

module master_fsm(
	input clk,
	input next,
	input up_button,
	input rst, 
	input down_button,
	output reg [1:0] out,
	output reg shift_left_1,
	output reg shift_right_1,
	output reg shift_left_2,
	output reg shift_right_2);

	reg [2:0] next_state = `OFF_1;
	wire [2:0] state;
	dffre #(3) flipflop(.clk(clk), .en(next), .r(rst), .d(next_state), .q(state));

	always @(*) begin
		case(state)
			`FLASH_1 : begin
				shift_left_1 = down_button;
				shift_right_1 = up_button;
			end
			
			`FLASH_2 : begin
				shift_left_2 = down_button;
				shift_right_2 = up_button;
			end
			
			default: {shift_left_1, shift_right_1, shift_left_2, shift_right_2} = 4'b0;
		endcase
	end

	always @(*) begin 
		case(state)
			`OFF_1: begin
				next_state = `ON;
				//out = 2'b00;
				end
			`ON: begin
				next_state = `OFF_2;
				//out = 2'b01;
				end
			`OFF_2: begin
				next_state = `FLASH_1;
				//out = 2'b00;
				end
			`FLASH_1: begin
				next_state = `OFF_3;
				//out = 2'b10;
				end
			`OFF_3: begin
				next_state = `FLASH_2;
				//out = 2'b00;
				end
			`FLASH_2: begin
				next_state = `OFF_1;
				//out = 2'b11;
				end
			default: begin
				next_state = `OFF_1;
				//out = 2'b00;
			end
		endcase
	end
	
	always @(*) begin
		case(state)
			`OFF_1, `OFF_2, `OFF_3 : out = 2'b00;
			`FLASH_1 : out = 2'b10;
			`FLASH_2 : out = 2'b11;
			`ON : out = 2'b01;
			default: out = 2'b00;
		endcase
	end
endmodule
