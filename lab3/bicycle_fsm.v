// Bicycle Light FSM
//
// This module determines how the light functions in the given state and what
// the next state is for the given state.
// 
// It is a structural module: it just instantiates other modules and hooks
// up the wires between them correctly.

/* For this lab, you need to implement the finite state machine following the
 * specifications in the lab hand-out */
 `define ON 2'b01
 `define OFF 2'b00
 `define FLASH1 2'b10
 `define FLASH2 2'b11
 


module bicycle_fsm(
    input clk, 
    input up_button, 
    input down_button, 
    input next, 
    input reset, 
    output reg rear_light
);
	wire [1:0] out_state;
	wire shift_left_1, shift_right_1, shift_left_2, shift_right_2;

    // Instantiations of master_fsm, beat32, fast_blinker, slow_blinker here
	master_fsm mastery(.clk(clk), .next(next), .up_button(up_button),
	.rst(reset), .down_button(down_button), .out(out_state), .shift_left_1(shift_left_1),
	.shift_right_1(shift_right_1), .shift_left_2(shift_left_2), .shift_right_2(shift_right_2));
	
	wire count_en; 
	beat32 beat_32(.clk(clk), .rst(reset), .out(count_en));
	
	wire flash_1, flash_2;
	programmable_blinker #(0) slow_blinker(.clk(clk), .reset(reset), .shift_left(shift_left_1),.shift_right(shift_right_1), .count_en(count_en), .out(flash_1));
	programmable_blinker #(1) fast_blinker(.clk(clk), .reset(reset), .shift_left(shift_left_2),.shift_right(shift_right_2), .count_en(count_en), .out(flash_2));
	
	//Mux4a muxy(.on(1'b1), .off(1'b0), .flash1(flash_1), .flash2(flash_2), .sel(out_state), .b(rear_light));
	always @(*) begin
		case(out_state)
			`ON: rear_light = 1'b1;
			`OFF: rear_light = 1'b0;
			`FLASH1: rear_light = flash_1;
			`FLASH2: rear_light = flash_2;
			default: rear_light =1'b0;
		endcase
		
	end
	
endmodule
