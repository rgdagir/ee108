library verilog;
use verilog.vl_types.all;
entity sine_reader is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        step_size       : in     vl_logic_vector(19 downto 0);
        generate_next   : in     vl_logic;
        sample_ready    : out    vl_logic;
        sample          : out    vl_logic_vector(15 downto 0)
    );
end sine_reader;
