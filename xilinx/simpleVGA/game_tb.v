`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:45:25 09/18/2016
// Design Name:   game
// Module Name:   /home/dsabanin/projects/embedded/xilinx/simpleVGA/game_tb.v
// Project Name:  simpleVGA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: game
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module game_tb;

	// Inputs
	reg CLK_100MHz;
	reg CLK_12MHz;
	reg [5:0] Switch;

	// Outputs
	wire HSync;
	wire VSync;
	wire [2:0] Red;
	wire [2:0] Green;
	wire [1:0] Blue;

	// Instantiate the Unit Under Test (UUT)
	game uut (
		.CLK_100MHz(CLK_100MHz), 
		.CLK_12MHz(CLK_12MHz), 
		.Switch(Switch), 
		.HSync(HSync), 
		.VSync(VSync), 
		.Red(Red), 
		.Green(Green), 
		.Blue(Blue)
	);

	initial begin
		// Initialize Inputs
		CLK_100MHz = 0;
		CLK_12MHz = 0;
		Switch = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
   always begin
         #10 CLK_100MHz = ~CLK_100MHz;    
         #8.333333 CLK_12MHz = ~CLK_12MHz;    
   end
      
endmodule

