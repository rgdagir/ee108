library verilog;
use verilog.vl_types.all;
entity wave_display_top is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        new_sample      : in     vl_logic;
        sample          : in     vl_logic_vector(15 downto 0);
        x               : in     vl_logic_vector(10 downto 0);
        y               : in     vl_logic_vector(9 downto 0);
        valid           : in     vl_logic;
        vsync           : in     vl_logic;
        r               : out    vl_logic_vector(7 downto 0);
        g               : out    vl_logic_vector(7 downto 0);
        b               : out    vl_logic_vector(7 downto 0)
    );
end wave_display_top;
