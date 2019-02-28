`define WAIT1 3'd0 //waiting for 
`define READ 3'd1
`define WAIT2 3'd2
`define SEND 3'd3
`define WAIT3 3'd4

module song_reader(
    input clk,
    input reset,
    input play,
    input [1:0] song,
    input note_done,
    output song_done,
    output [5:0] note,
    output [5:0] duration,
    output new_note
);

	wire [2:0] state;
	reg [2:0] next_state;
	wire [4:0] curr_note;
	reg [4:0] next_note;	
	wire [6:0] address;
	wire [11:0] rom_out;
	assign address = {song, curr_note};
	
	song_rom songy(.clk(clk), .addr(address), .dout(rom_out));
	assign {note, duration} = rom_out;
	
	dffr #(3) rom_flipflop(.clk(clk),.r(reset), .d(next_state), .q(state));
	dffr #(5) state_flipflop(.clk(clk),.r(reset), .d(next_note), .q(curr_note));
	
	reg note_ready;
	reg done;
	
	always @(*) begin
		case(state)
			`WAIT1 : begin
				next_state = `SEND;
				next_note = curr_note;
		
				done = 0; 
				note_ready = 0;
			 end
			`READ : begin
				next_note = curr_note + 5'd1; //overflow, no need to set to 1
				next_state = `WAIT2;
				
				done = (curr_note == 5'd31);
				note_ready = 0;
				$display("Playing note %d of song %d, which is note %d duration %d",
							curr_note, song, note, duration);
			 end
			`WAIT2 : begin
				next_state = play ? `SEND : `WAIT2; //Only enter send state if play is true
				next_note = curr_note;
				note_ready = 0;
				done = 0;
			 end
			`SEND : begin
				next_state = `WAIT3; 
				next_note = curr_note;
				note_ready = 1;
				done = 0;
			 end
			`WAIT3 : begin
				next_state = (note_done) ? `READ : `WAIT3;
				next_note = curr_note;
				
				note_ready = 0;
				done = 0;
			 end
			 
			 default : begin
				next_state = state;
				next_note = curr_note;
				note_ready = 0;
				done = 0;
			 end 
		endcase
	end
	
	assign new_note  = note_ready;
	assign song_done = done;
    
endmodule

