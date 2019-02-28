`define ONE 20'b00000000010000000000
`define MAX 20'b11111111111111111111

`define STATE_NEXT 2'd1
`define STATE_WAITING 2'd0
`define STATE_GENERATING 2'd2
module sine_reader(
    input clk,
    input reset,
    input [19:0] step_size,
    input generate_next,

    output sample_ready,
    output wire [15:0] sample
);
	wire [21:0] curr_addr;
	reg [21:0]  next_addr;
	wire [15:0] rom_out;

	sine_rom s_rom(.clk(clk),.addr(curr_addr[19:10]),.dout(rom_out));
   dffre #(22) rom_flipflop(.clk(clk),.r(reset),.en(generate_next), .d(next_addr), .q(curr_addr));
	

	wire [1:0] state;
	reg [1:0] next_state;
	dffr #(2) counter(.clk(clk), .r(reset), .d(next_state), .q(state));
	
	always @(*) begin
		case(curr_addr[20])
			0 : begin //Addition Zone
				next_addr[19:0] = ((`MAX - step_size) < curr_addr[19:0]) ? (`MAX - (curr_addr[19:0] + step_size + `ONE)) : (curr_addr[19:0] + step_size);
				next_addr[21:20] = ((`MAX - step_size) <= curr_addr[19:0]) ? curr_addr[21:20] + 2'd1 : curr_addr[21:20];
			end			
			
			1 : begin //Subtraction Zone
				next_addr[19:0] = (step_size > curr_addr[19:0]) ? (20'd0 - (curr_addr[19:0] - step_size - `ONE)) : (curr_addr[19:0] - step_size);
				next_addr[21:20] = (step_size >= curr_addr[19:0]) ? curr_addr[21:20] + 2'd1 : curr_addr[21:20];
			end			

			default: begin
				next_addr = curr_addr;
			end
		endcase
	end
	
	reg next_sign;
	wire sign;
	dffr #(2) sign_flipflop(.clk(clk), .r(reset), .d(next_sign), .q(sign));
	assign sample = (sign) ? (16'd0 - rom_out) : (rom_out);
	
	always @(*) begin
		case(state)
			`STATE_NEXT : begin
				next_state = (generate_next) ? `STATE_GENERATING : `STATE_WAITING;
				next_sign = curr_addr[21];
			end
			
			`STATE_WAITING : begin 
				next_state = (generate_next) ? `STATE_GENERATING : `STATE_WAITING;
				next_sign = sign;
			end
			`STATE_GENERATING : begin 
				next_state = `STATE_NEXT;
				next_sign = curr_addr[21];
			end
			default: begin
				next_state = `STATE_WAITING;
				next_sign = sign;
			end
		endcase
	end
	
	assign sample_ready = (state == `STATE_NEXT);
		
endmodule
