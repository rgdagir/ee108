library verilog;
use verilog.vl_types.all;
entity wave_display is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        x               : in     vl_logic_vector(10 downto 0);
        y               : in     vl_logic_vector(9 downto 0);
        valid           : in     vl_logic;
        read_value      : in     vl_logic_vector(7 downto 0);
        read_index      : in     vl_logic;
        read_address    : out    vl_logic_vector(8 downto 0);
        valid_pixel     : out    vl_logic;
        r               : out    vl_logic_vector(7 downto 0);
        g               : out    vl_logic_vector(7 downto 0);
        b               : out    vl_logic_vector(7 downto 0)
    );
end wave_display;
