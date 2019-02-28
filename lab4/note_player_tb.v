`timescale 1ns/1ps
module note_player_tb();

    reg clk, reset, play_enable, generate_next_sample;
    reg [5:0] note_to_load;
    reg [5:0] duration_to_load;
    reg load_new_note;
    wire done_with_note, new_sample_ready, beat;
    wire [15:0] sample_out;

    note_player np(
        .clk(clk),
        .reset(reset),

        .play_enable(play_enable),
        .note_to_load(note_to_load),
        .duration_to_load(duration_to_load),
        .load_new_note(load_new_note),
        .done_with_note(done_with_note),

        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(sample_out),
        .new_sample_ready(new_sample_ready)
    );

    beat_generator #(.WIDTH(17), .STOP(300)) beat_generator(
        .clk(clk),
        .reset(reset),
        .en(1'b1),
        .beat(beat)
    );

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #1 clk = ~clk;
    end
	 
	 // generate_next_sample timing
    initial begin
        generate_next_sample = 1'b0;
        @(negedge reset);
        forever #2 generate_next_sample = ~generate_next_sample;
    end

    // Tests
    initial begin
			// test 1 - load new note
			#10 play_enable = 1; note_to_load = 6'd21; duration_to_load = 6'd12; load_new_note = 1;
			#10 load_new_note = 1;
			#500 load_new_note = 0;
			#10 play_enable = 0; // testing pause
			#1000 play_enable = 1; // testing play from paused state
			#1000 play_enable = 0;
			
			// test 2 - load another note, no play/pause, wait for song to finish
			#10 play_enable = 1; note_to_load = 6'd1; duration_to_load = 6'd8; load_new_note = 1;
			#10 load_new_note = 0;
			#2000 load_new_note = 0;
			
			// test3 - song_reader gives new note, load_new_note does not go high
			#10 play_enable = 1; note_to_load = 6'd35; duration_to_load = 6'd8; load_new_note = 0;
			#10 load_new_note = 0;
			#2000 load_new_note = 0;
			
			// test4 - loading loooong note
			#10 play_enable = 1; note_to_load = 6'b111111; duration_to_load = 6'd111111; load_new_note = 1;
			#10 load_new_note = 0;
			#2000 load_new_note = 0;

    end

endmodule
