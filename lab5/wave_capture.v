`define ARMED 2'b00
`define ACTIVE 2'b01
`define WAIT 2'b10

module wave_capture (
    input clk,
    input reset,
    input new_sample_ready,
    input [15:0] new_sample_in,
    input wave_display_idle,

    output wire [8:0] write_address,
    output wire write_enable,
    output wire [7:0] write_sample,
    output wire read_index
);
// State flip-flop [ARMED, ACTIVE, WAIT]
reg [1:0] next_state;
wire [1:0] curr_state;
dffr #(2) capture_state_flipflop(.clk(clk), .r(reset), .d(next_state), .q(curr_state));

//Tracks current sample and previous sample - used to check for zero-crossing
//When previous sample is negative and current sample is positive, zero-crossing occurs
wire [15:0] curr_sample, prev_curr_sample;
dffre #(16) capture_sample_flipflop(.clk(clk), .r(reset), .en(new_sample_ready), .d(new_sample_in), .q(curr_sample));
dffre #(16) capture_prevsample_flipflop(.clk(clk), .r(reset), .en(new_sample_ready), .d(curr_sample), .q(prev_curr_sample));


//Zero-crossing logic
wire zero_crossing; 
assign zero_crossing = (prev_curr_sample[15] == 1) & (curr_sample[15] == 0);

//Counter flip-flop
reg [7:0] next_counter;
wire [7:0] curr_counter;
dffre #(8) capture_counter_flipflop(.clk(clk), .r(reset), .en(new_sample_ready), .d(next_counter), .q(curr_counter));

//Read-index flip-flop
reg next_read_index; 
dffr #(1) capture_readind_flipflop(.clk(clk), .r(reset), .d(next_read_index), .q(read_index));

//State logic [ARMED, ACTIVE, WAIT] 
always @(*) begin
	case(curr_state)
	`ARMED : begin //Armed, should set counter to 0 until we need to enter active at zero-crossing
		next_state = zero_crossing ? `ACTIVE : `ARMED;
		next_counter = zero_crossing ? curr_counter + 1 : 0;
		next_read_index = read_index;
	end
	
	`ACTIVE : begin //Increase counter for each new_sample_ready until we 256 times
		next_state = (curr_counter == 8'd255) ? `WAIT : `ACTIVE;
		next_counter = curr_counter + 1;
		next_read_index = read_index;
	end
	
	`WAIT : begin //Wait until we recieve wave_idle display
		if(wave_display_idle) begin
			next_state = `ARMED;
			next_read_index = ~read_index;
		end
		else begin
			next_state = `WAIT;
			next_read_index = read_index;
		end

		next_counter = 0;
	end
	
	default : begin 
		next_state = `ARMED;
		next_counter = 0;
		next_read_index = 0;
	end
	endcase
end

//Assigning outputs
assign write_address = {~read_index, curr_counter};
assign write_sample = {~curr_sample[15], curr_sample[14:8]};
assign write_enable = (curr_state == `ACTIVE);

endmodule
