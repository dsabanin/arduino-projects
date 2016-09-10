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
module myModule(MYSWITCH, CLK_12MHz, LED);

   input MYSWITCH;
   input CLK_12MHz;
   wire CLK_20Hz; 
   myClock myclkmod(CLK_12MHz, CLK_20Hz);
   output wire [7:0] LED;
   reg [7:0] LED_STATE = 8'b00000001;
   
   always @ (posedge CLK_20Hz) begin
      if(!MYSWITCH)
         LED_STATE = 8'b11111111;
      else begin
         LED_STATE = LED_STATE << 1;
         if (LED_STATE == 8'b00000000) 
            LED_STATE = 8'b00000001;
      end
   end
   
   assign LED = LED_STATE;

endmodule
