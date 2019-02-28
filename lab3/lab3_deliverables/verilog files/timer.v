// defining states
/*`define INITIAL 2'd0
`define COUNTING 2'd1
`define DONE 2'd2

module timer(
    input clk,
	 input reset,
    input wire [6:0] load_value,
    input count_en,
    output out);
	
    reg [8:0] next_value; 
	 wire [8:0] value;
	 
	 reg [1:0] next_state;
	 wire [1:0] state;
	 
    // value dff
    dffre #(9) value_dff (.clk(clk), .r(reset), .en(count_en), .d(next_value), .q(value));
	 
	 dffr #(2) state_dff (.clk(clk), .r(reset), .d(next_state), .q(state));
	 
    always @(*) begin
		case(state)
			`INITIAL: begin
				next_state = (next_value == {load_value, 2'b0}) ? `INITIAL : `COUNTING;
			end
			
			`COUNTING: begin
				next_state = (next_value == {load_value, 2'b0}) ? `DONE : `COUNTING;
			end
			
			`DONE: begin
				next_state = `INITIAL;
			end
			
			default: begin 
				next_state = `INITIAL;
			end
		endcase		
	 end
	 
	 always @(*) begin
		casex(value)
			0 : next_value = {load_value, 2'b0};
			
			default: next_value = value - 1;
		endcase
	 end
	 
	 
	 assign out = (state == `DONE);
endmodule
*/
module timer(
    input clk,
	 input reset,
    input wire [6:0] load_value,
    input count_en,
    output reg out);
	
    reg [8:0] next_load_value; 
	 wire [8:0] value;
	 

	 
    // value dff
    dffre #(9) value_dff (.clk(clk), .r(reset), .en(count_en), .d(next_load_value), .q(value));
	 
	 
    always @(*) begin
		if (value > 1)
			begin
				out = 0;
				next_load_value = count_en ? value - 1 : next_load_value;
			end
		else if (value == 1)
			begin
				out = 1;
				next_load_value = {load_value, 2'b0};
			end
		else begin
				out = 0;
				next_load_value = {load_value, 2'b0};
		end
	 end


endmodule





