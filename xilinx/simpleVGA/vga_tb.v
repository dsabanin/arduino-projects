`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:59:07 09/17/2016
// Design Name:   vga
// Module Name:   /home/dsabanin/projects/embedded/xilinx/simpleVGA/vga_tb.v
// Project Name:  simpleVGA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vga_tb;

	// Inputs
	reg CLK_100MHz;

	// Outputs
	wire HSync;
	wire VSync;
	wire [2:0] Red;
	wire [2:0] Green;
	wire [1:0] Blue;

	// Instantiate the Unit Under Test (UUT)
	vga uut (
		.CLK_100MHz(CLK_100MHz), 
		.HSync(HSync), 
		.VSync(VSync), 
		.Red(Red), 
		.Green(Green), 
		.Blue(Blue)
	);

	initial begin
      $display($time, "<< LEt's go >>");
		// Initialize Inputs
		CLK_100MHz = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
   always
      #5 CLK_100MHz = ~CLK_100MHz;    // every ten nanoseconds invert
endmodule

