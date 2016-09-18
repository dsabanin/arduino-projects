`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:40 09/18/2016 
// Design Name: 
// Module Name:    game 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module game(input CLK_100MHz, input CLK_12MHz, input [5:0] Switch, output HSync, output VSync, output [2:0] Red, output [2:0] Green, output [1:0] Blue);

   parameter playerH = 100;
   parameter playerW = 100;
   
   wire [7:0] pixel;
   wire [11:0] column, row;
   reg signed [12:0] posX = 0;
   reg signed [12:0] posY = 0;
   wire [11:0] x, y;
   reg [16:0] switch_clk = 0;
   
   assign x = column - 1'b1;
   assign y = row;
   assign pixel = (x >= posX && x <= (posX+playerW) && y >= posY && y <= (posY+playerH)) ? 8'b11110111 : 8'b11111111;

   vga vga_1(CLK_100MHz, pixel, column, row, HSync, VSync, Red, Green, Blue);
      
   always @ (posedge CLK_12MHz) begin
      switch_clk <= switch_clk + 1;
   end
   
   always @ (posedge switch_clk[15]) begin
      $monitor("%0t, x = %d, y = %d", $time, x, y);
      if(!Switch[0]) // left
         posX <= (posX - 1) > 0 ? posX - 1 : 0;
      else if (!Switch[1]) // right
         posX <= (posX + 1) < (1024 - playerW) ? posX + 1 : (1024 - playerW);
      
      if(!Switch[2]) // down
         posY <= posY + 1 < (768 - playerH) ? posY + 1 : (768 - playerH);
      else if(!Switch[3]) // up
         posY <= posY - 1 > 0 ? posY - 1 : 0;
   end
      
endmodule
