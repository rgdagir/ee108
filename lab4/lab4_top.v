module lab4_top(
    // Clock
    input clk,
    // ADAU1761 interface
    output  AC_ADR0,            // I2C Address pin (DO NOT CHANGE)
    output  AC_ADR1,            // I2C Address pin (DO NOT CHANGE)

    output  AC_GPIO0,           // I2S Signals
    input   AC_GPIO1,           // I2S Signals
    input   AC_GPIO2,           // I2S Byte Clock
    input   AC_GPIO3,           // I2S Channel Clock

    output  AC_MCLK,            // Master clock (48MHz)
    output  AC_SCK,             // I2C SCK
    inout   AC_SDA,             // I2C SDA

    // Push button interface
    input  left_button,
    input  right_button,
    input  up_button,
    // LEDs
    output wire [3:0] leds_l,
    output wire [3:0] leds_r
);
    // button_press_unit's WIDTH parameter is exposed here so that you can
    // reduce it in simulation.  Setting it to 1 effectively disables it.
    parameter BPU_WIDTH = 20;
    // The BEAT_COUNT is parameterized so you can reduce this in simulation.
    // If you reduce this to 100 your simulation will be 10x faster.
    parameter BEAT_COUNT = 1000;

    // Our reset
    wire reset = up_button;

//
//  ****************************************************************************
//      Button processor units
//  ****************************************************************************
//
    wire play;
    button_press_unit #(.WIDTH(BPU_WIDTH)) play_button_press_unit(
        .clk(clk),
        .reset(reset),
        .in(left_button),
        .out(play)
    );

    wire next;
    button_press_unit #(.WIDTH(BPU_WIDTH)) next_button_press_unit(
        .clk(clk),
        .reset(reset),
        .in(right_button),
        .out(next)
    );

//
//  ****************************************************************************
//      The music player
//  ****************************************************************************
//
    wire new_frame;
    wire [15:0] codec_sample;
    wire new_sample;
    music_player #(.BEAT_COUNT(BEAT_COUNT)) music_player(
        .clk(clk),
        .reset(reset),
        .play_button(play),
        .next_button(next),
        .new_frame(new_frame),
        .sample_out(codec_sample),
        .new_sample_generated(new_sample)
    );

//
//  ****************************************************************************
//      Codec interface
//  ****************************************************************************
//
    // Output the sample onto the LEDs for the fun of it.
    assign leds_l = codec_sample[15:12];
    assign leds_r = codec_sample[11:8];

    wire [23:0] hphone_r = 0;
    wire [23:0] line_in_l = 0;
    wire [23:0] line_in_r = 0;



	// INST_TAG
    adau1761_codec adau1761_codec(
        .clk_100(clk),
        .reset(reset),
        .AC_ADR0(AC_ADR0),
        .AC_ADR1(AC_ADR1),
        .I2S_MISO(AC_GPIO0),
        .I2S_MOSI(AC_GPIO1),
        .I2S_bclk(AC_GPIO2),
        .I2S_LR(AC_GPIO3),
        .AC_MCLK(AC_MCLK),
        .AC_SCK(AC_SCK),
        .AC_SDA(AC_SDA),
        .hphone_l({codec_sample, 8'h00}),
        .hphone_r(hphone_r),
        .line_in_l(line_in_l),
        .line_in_r(line_in_r),
        .new_sample(new_frame)
    );
	// INST_TAG_END
endmodule
