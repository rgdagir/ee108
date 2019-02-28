library verilog;
use verilog.vl_types.all;
entity codec_conditioner is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        new_sample_in   : in     vl_logic_vector(15 downto 0);
        latch_new_sample_in: in     vl_logic;
        generate_next_sample: out    vl_logic;
        new_frame       : in     vl_logic;
        valid_sample    : out    vl_logic_vector(15 downto 0)
    );
end codec_conditioner;
