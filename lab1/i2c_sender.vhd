library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity i2c_sender is
    Port ( clk    : in    STD_LOGIC;    
           resend : in    STD_LOGIC;
           sioc   : out   STD_LOGIC;
           siod   : inout STD_LOGIC
    );
end i2c_sender;

architecture Behavioral of i2c_sender is
   signal   divider           : unsigned(7 downto 0)  := (others => '0'); 
    -- this value gives nearly 200ms cycles before the first register is written
   signal   initial_pause     : unsigned(22 downto 0) := (others => '0');
   signal   finished          : std_logic := '0';
   signal   address           : std_logic_vector(7 downto 0)  := (others => '0');
   signal   clk_first_quarter : std_logic_vector(28 downto 0) := (others => '1');
   signal   clk_last_quarter  : std_logic_vector(28 downto 0) := (others => '1');
   signal   busy_sr           : std_logic_vector(28 downto 0) := (others => '1');
   signal   data_sr           : std_logic_vector(28 downto 0) := (others => '1');
   signal   tristate_sr       : std_logic_vector(28 downto 0) := (others => '0');
   signal   reg_value         : std_logic_vector(15 downto 0)  := (others => '0');
   constant i2c_wr_addr       : std_logic_vector(7 downto 0)  := x"72";
begin

registers: process(clk)
   begin
      if rising_edge(clk) then
         case address is
            when x"00" => reg_value  <= x"4100"; -- Powerup please
            when x"01" => reg_value  <= x"9803"; -- Must be set to this
            when x"02" => reg_value  <= x"9AE0"; -- Must be set to this
            when x"03" => reg_value  <= x"9C30"; -- Must be set to this
            when x"04" => reg_value  <= x"9D61"; -- Must be set to this
            when x"05" => reg_value  <= x"A2A4"; -- Must be set to this
            when x"06" => reg_value  <= x"A3A4"; -- Must be set to this
            when x"07" => reg_value  <= x"E0D0"; -- Must be set to this
            when x"08" => reg_value  <= x"5512"; -- Must be set to this
            when x"09" => reg_value  <= x"F900"; -- Must be set to this
            when x"0a" => reg_value  <= x"9d01"; -- pixel divider
            when x"0b" => reg_value  <= x"1506"; -- YCbCr 422, DDR, External sync
            when x"0c" => reg_value  <= x"4810"; -- Right aligned data (D23 downto 8)
            when x"0d" => reg_value  <= x"1636"; -- 8 bit style 2, 1st half on rising edge - RGB output
            when x"0e" => reg_value  <= x"1700"; -- output aspect ratio 16:9, external DE 
            when x"0f" => reg_value  <= x"1800"; -- CSC off
            when x"10" => reg_value  <= x"AF00"; -- DVI mode
            when x"11" => reg_value  <= x"4c04"; -- Deep colour (HDMI only?)
            when x"12" => reg_value  <= x"4000"; -- Turn off additional data packets
            when others => reg_value <= x"ffff";
         end case;
      end if;
   end process;

i2c_tristate: process(data_sr, tristate_sr)
   begin
      if tristate_sr(tristate_sr'length-1) = '0' then
         siod <= data_sr(data_sr'length-1);
      else
         siod <= 'Z';
      end if;
   end process;
   
   with divider(divider'length-1 downto divider'length-2) 
      select sioc <= clk_first_quarter(clk_first_quarter'length -1) when "00",
                     clk_last_quarter(clk_last_quarter'length -1)   when "11",
                     '1' when others;
                     
i2c_send:   process(clk)
   begin
      if rising_edge(clk) then
         if resend = '1' then 
            address           <= (others => '0');
            clk_first_quarter <= (others => '1');
            clk_last_quarter  <= (others => '1');
            busy_sr           <= (others => '0');
            divider           <= (others => '0');
            initial_pause     <= (others => '0');
            finished <= '0';
         end if;

         if busy_sr(busy_sr'length-1) = '0' then
            if initial_pause(initial_pause'length-1) = '0' then
               initial_pause <= initial_pause+1;
            elsif finished = '0' then
               if divider = "11111111" then
                  divider <= (others =>'0');
                  if reg_value(15 downto 8) = "11111111" then
                     finished <= '1';
                  else
                     -- move the new data into the shift registers
                     clk_first_quarter <= (others => '0'); clk_first_quarter(clk_first_quarter'length-1) <= '1';
                     clk_last_quarter <= (others => '0');  clk_last_quarter(0) <= '1';
                     
                     --             Start    Address        Ack        Register           Ack          Value         Ack    Stop
                     tristate_sr <= "0" & "00000000"  & "1" & "00000000"             & "1" & "00000000"             & "1"  & "0";
                     data_sr     <= "0" & i2c_wr_addr & "1" & reg_value(15 downto 8) & "1" & reg_value( 7 downto 0) & "1"  & "0";
                     busy_sr     <= (others => '1');
                     address     <= std_logic_vector(unsigned(address)+1);
                  end if;
               else
                  divider <= divider+1; 
               end if;
            end if;
         else
            if divider = "11111111" then   -- divide clkin by 255 for I2C
               tristate_sr       <= tristate_sr(tristate_sr'length-2 downto 0) & '0';
               busy_sr           <= busy_sr(busy_sr'length-2 downto 0) & '0';
               data_sr           <= data_sr(data_sr'length-2 downto 0) & '1';
               clk_first_quarter <= clk_first_quarter(clk_first_quarter'length-2 downto 0) & '1';
               clk_last_quarter  <= clk_last_quarter(clk_first_quarter'length-2 downto 0) & '1';
               divider           <= (others => '0');
            else
               divider <= divider+1;
            end if;
         end if;
      end if;
   end process;
end Behavioral;
