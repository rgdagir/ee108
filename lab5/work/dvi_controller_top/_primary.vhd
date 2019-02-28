library verilog;
use verilog.vl_types.all;
entity dvi_controller_top is
    port(
        clk             : in     vl_logic;
        enable          : in     vl_logic;
        reset           : in     vl_logic;
        r               : in     vl_logic_vector(7 downto 0);
        g               : in     vl_logic_vector(7 downto 0);
        b               : in     vl_logic_vector(7 downto 0);
        chip_data_enable: out    vl_logic;
        chip_hsync      : out    vl_logic;
        chip_vsync      : out    vl_logic;
        chip_reset      : out    vl_logic;
        chip_data       : out    vl_logic_vector(11 downto 0);
        x               : out    vl_logic_vector(10 downto 0);
        y               : out    vl_logic_vector(9 downto 0);
        xclk            : out    vl_logic;
        xclk_n          : out    vl_logic
    );
end dvi_controller_top;
