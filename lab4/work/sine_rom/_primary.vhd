library verilog;
use verilog.vl_types.all;
entity sine_rom is
    port(
        clk             : in     vl_logic;
        addr            : in     vl_logic_vector(9 downto 0);
        dout            : out    vl_logic_vector(15 downto 0)
    );
end sine_rom;
