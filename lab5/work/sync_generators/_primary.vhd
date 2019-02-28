library verilog;
use verilog.vl_types.all;
entity sync_generators is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        enable          : in     vl_logic;
        hsync           : out    vl_logic;
        vsync           : out    vl_logic;
        valid_data      : out    vl_logic;
        x               : out    vl_logic_vector(10 downto 0);
        y               : out    vl_logic_vector(9 downto 0)
    );
end sync_generators;
