library verilog;
use verilog.vl_types.all;
entity music_player is
    generic(
        BEAT_COUNT      : integer := 1000
    );
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        play_button     : in     vl_logic;
        next_button     : in     vl_logic;
        new_frame       : in     vl_logic;
        new_sample_generated: out    vl_logic;
        sample_out      : out    vl_logic_vector(15 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of BEAT_COUNT : constant is 1;
end music_player;
