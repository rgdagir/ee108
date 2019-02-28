library verilog;
use verilog.vl_types.all;
entity mcu is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        play_button     : in     vl_logic;
        next_button     : in     vl_logic;
        play            : out    vl_logic;
        reset_player    : out    vl_logic;
        song            : out    vl_logic_vector(1 downto 0);
        song_done       : in     vl_logic
    );
end mcu;
