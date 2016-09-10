`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:36:04 09/08/2016 
// Design Name: 
// Module Name:    myClock 
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
module myClock(
    input inclk,
    output outclk
    );

reg [19:0] counter;
reg out;

always @(posedge inclk) begin
   if(counter == 20'd600000) begin 
      counter <= 0;
      out <= 1;
    end
    else begin
      counter <= counter + 1;
      out <= 0;
    end
end

assign outclk = out;

endmodule
