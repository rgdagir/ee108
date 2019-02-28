`timescale 1ns/1ps
module mcu_tb();
    reg clk, reset, play_button, next_button, song_done;
    wire play, reset_player;
    wire [1:0] song;

    mcu dut(
        .clk(clk),
        .reset(reset),
        .play_button(play_button),
        .next_button(next_button),
        .play(play),
        .reset_player(reset_player),
        .song(song),
        .song_done(song_done)
    );

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #5 clk = ~clk;
    end

    // Tests
    initial begin
		// Start playing
		@(negedge reset)
		play_button = 1'b1; next_button = 1'b0; song_done = 1'b0;
		#30
		play_button = 1'b0; next_button = 1'b0; song_done = 1'b0;
		
		//Pausing
		#50
		play_button = 1'b1;
		#10
		play_button = 1'b0;
		
		//Resume playing again and then change song
		#50
		next_button = 1'b1;
		#10
		next_button = 1'b0;		
		play_button = 1'b1;
		#10
		play_button = 1'b0;
		
		//Stop playing and then change song back to song 0
		#50
		play_button = 1'b1;
		#10
		play_button = 1'b0;
		next_button = 1'b1;
		#10
		next_button = 1'b0;
		#10
		next_button = 1'b1;
		#10
		next_button = 1'b0;
		#50
		play_button = 1'b1;
		#10
		play_button = 1'b0;
		#100;
		song_done = 1'b1;
		#10
		song_done = 1'b0;
		
		// test reset again
		#10
		play_button = 1'b1;
		#10
		play_button = 1'b0;
		#10
		next_button = 1'b1;
		#10
		next_button = 1'b0;
		#10
		reset = 1'b1;
		
    end

endmodule
