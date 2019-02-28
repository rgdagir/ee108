library verilog;
use verilog.vl_types.all;
entity wave_capture is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        new_sample_ready: in     vl_logic;
        new_sample_in   : in     vl_logic_vector(15 downto 0);
        wave_display_idle: in     vl_logic;
        write_address   : out    vl_logic_vector(8 downto 0);
        write_enable    : out    vl_logic;
        write_sample    : out    vl_logic_vector(7 downto 0);
        read_index      : out    vl_logic
    );
end wave_capture;
