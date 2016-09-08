`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:44 09/07/2016 
// Design Name: 
// Module Name:    myModule 
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
module myModule(LED);

   reg [7:0] val = 8'h00;
   output wire [7:0] LED;
   always begin
      if (val == 8'b1111111)
         val <= 8'b0000000;
      else
         val <= 8'b11111111;
   end 
   
   assign LED = val;

endmodule
