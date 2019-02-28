library verilog;
use verilog.vl_types.all;
entity song_reader is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        play            : in     vl_logic;
        song            : in     vl_logic_vector(1 downto 0);
        note_done       : in     vl_logic;
        song_done       : out    vl_logic;
        note            : out    vl_logic_vector(5 downto 0);
        duration        : out    vl_logic_vector(5 downto 0);
        new_note        : out    vl_logic
    );
end song_reader;
