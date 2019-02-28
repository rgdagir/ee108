library verilog;
use verilog.vl_types.all;
entity fake_sample_ram is
    port(
        clk             : in     vl_logic;
        addr            : in     vl_logic_vector(7 downto 0);
        dout            : out    vl_logic_vector(7 downto 0)
    );
end fake_sample_ram;
