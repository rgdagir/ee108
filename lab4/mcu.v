// gray code one bit for play/plause + two bits for song


// FALLBACK MCU - 8 STATES
module mcu(
    input clk,
    input reset,
    input play_button, // 1
    input next_button, // 0
    output play,
    output reset_player,
    output [1:0] song,
    input song_done // 0
);

    reg [1:0] next_song;
	 reg next_play;
	 reg reset_reg;
	 
	 dffr #(2) song_flipflop(.clk(clk), .r(reset), .d(next_song), .q(song));
	 dffr play_flipflop(.clk(clk), .r(reset), .d(next_play), .q(play));
	 
	 assign reset_player = reset_reg;
	 
	 always @(*) begin
		if(reset) begin
			next_song = 2'b0;
			next_play = 0;
			reset_reg = 1;
		end
		
		else if(play_button) begin
			next_song = song;
			next_play = ~play; 
			reset_reg = 0;
		end
		
		else if(next_button) begin
			next_song = song + 2'b1;
			next_play = 0;
			reset_reg = 1;
		end
		
		else if(song_done) begin
			next_song = song + 2'b01;
			next_play = 0;
			reset_reg = 1;
		end
		else begin
			next_song = song;
			next_play = play;
			reset_reg = 0;
		end
	 end

endmodule
