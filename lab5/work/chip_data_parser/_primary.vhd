library verilog;
use verilog.vl_types.all;
entity chip_data_parser is
    port(
        clk             : in     vl_logic;
        r               : in     vl_logic_vector(7 downto 0);
        g               : in     vl_logic_vector(7 downto 0);
        b               : in     vl_logic_vector(7 downto 0);
        valid           : in     vl_logic;
        chip_data       : out    vl_logic_vector(11 downto 0);
        chip_data_enable: out    vl_logic
    );
end chip_data_parser;
