// gray code one bit for play/plause + two bits for song

`define PAUSE 3'b011
`define PLAY1 3'b100
`define PAUSE1 3'b000
`define PLAY2 3'b101
`define PAUSE2 3'b001
`define PLAY3 3'b110
`define PAUSE3 3'b010
`define PLAY4 3'b111

// FALLBACK MCU - 7 STATES
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

    reg [2:0] next_state;
    wire [2:0] state;
    reg playa;

    dffr state_ff (.clk(clk), .r(reset), .d(next_state), .q(state));

    always @(*) begin
        case(state)
            `PAUSE: begin
                        if (next_button == 1'b1) begin
                            next_state = `PLAY1;
                            curr_song = state[1:0] + 1'd1;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PAUSE;

                        end
                    end
            `PLAY1: begin
                        playa = play_button;
                        if (next_button == 1'b1) begin
                            next_state = `PAUSE1;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PLAY1;
                        end
                    end
            `PAUSE1:begin
                        if (next_button == 1'b1) begin
                            next_state = `PLAY2;
                            curr_song = state[1:0] + 1'd1;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PAUSE1;

                        end
                    end
            `PLAY2: begin
                        playa = play_button;
                        if (next_button == 1'b1) begin
                            next_state = `PAUSE2;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PLAY2;
                        end
                    end
            `PAUSE2:begin
                        if (next_button == 1'b1) begin
                            next_state = `PLAY3;
                            curr_song = state[1:0] + 1'd1;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PAUSE2;

                        end
                    end
            `PLAY3: begin
                        playa = play_button;
                        if (next_button == 1'b1) begin
                            next_state = `PAUSE2;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PLAY2;
                        end
                    end
            `PAUSE3:begin
                        if (next_button == 1'b1) begin
                            next_state = `PLAY1;
                            curr_song = state[1:0] + 1'd1;
                            rst_player = 1'b1;
                            playa = 1'b0;
                            end
                        else begin
                            next_state = `PAUSE3;
                        end
                    end
            `PLAY4: begin 
                    end

            default: begin
                        next_state = `PAUSE;
                        curr_song = 1'b0;
                        rst_player = 1'b0;
                    end
        endcase

    assign play = playa;
    assign reset_player = rst_player;
    assign song = curr_song;

    

endmodule
`define PLAY 1'b1

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
    reg [1:0] curr_song;
    reg reset_state;
    reg next_state;
    wire state;
    dffr #(1) dif (.clk(clk), .r(reset), .d(next_state), .q(state));
    dffr #(2) songdif (.clk(clk), .r(reset), .d(curr_song), .q(song));

    always @(*) begin
        case(state)
            `PAUSE: begin
                            if ((next_button == 1'b1)) begin //& ~reset_state
                                reset_state = 1'b1;
                                curr_song = song + 2'd1;
                                next_state = play_button;
                            end
                            else begin
                                reset_state = 1'b0;
                                next_state = play_button;
                            end
                      end
            `PLAY: begin
                            if ((next_button == 1'b1 | song_done == 1'b1)) begin //& ~reset_state
                                reset_state = 1'b1;
                                curr_song = song + 2'd1;
                                next_state = `PAUSE;
                            end
                            else begin
                                reset_state = 1'b0;
                                next_state = ~play_button;
                            end
                      end
            default: begin
                            next_state = `PAUSE;
                            curr_song = 1'b0;
                            reset_state = 1'b0;
                        end
        endcase
    end

    assign play = state;
    assign reset_player = reset_state;


endmodule
`define PLAY 1'b1

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
	reg [1:0] curr_song;
	reg reset_state;
	reg next_state;
	wire state;
	dffr #(1) dif (.clk(clk), .r(reset), .d(next_state), .q(state));
	dffr #(2) songdif (.clk(clk), .r(reset), .d(curr_song), .q(song));
	
	always @(*) begin
		case(state)
			`PAUSE: begin
							if ((next_button == 1'b1)) begin //& ~reset_state
								reset_state = 1'b1;
								curr_song = song + 2'd1;
								next_state = play_button;
							end
							else begin
								reset_state = 1'b0;							
								next_state = play_button;
							end
					  end
			`PLAY: begin
							if ((next_button == 1'b1 | song_done == 1'b1)) begin //& ~reset_state
								reset_state = 1'b1;
								curr_song = song + 2'd1; 
								next_state = `PAUSE;
							end
							else begin
								reset_state = 1'b0;
								next_state = ~play_button;
							end
					  end
			default: begin
							next_state = `PAUSE;
							curr_song = 1'b0; 
							reset_state = 1'b0;
						end
		endcase
	end
	
	assign play = state; 
	assign reset_player = reset_state;
	
	
endmodule


