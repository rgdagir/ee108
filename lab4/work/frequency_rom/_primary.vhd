library verilog;
use verilog.vl_types.all;
entity frequency_rom is
    port(
        clk             : in     vl_logic;
        addr            : in     vl_logic_vector(5 downto 0);
        dout            : out    vl_logic_vector(19 downto 0)
    );
end frequency_rom;
