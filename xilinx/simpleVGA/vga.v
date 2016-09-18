`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:46:08 09/17/2016 
// Design Name: 
// Module Name:    vga 
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
module vga(input CLK_100MHz, output HSync, output VSync, output [2:0] Red, output [2:0] Green, output [1:0] Blue, output [1:0] LED);
   
   wire vga_clk;
   wire blank;
   wire vblank;
   wire hblank;
   wire line_clk;
   reg reset = 0;
   reg [7:0] pixel = 8'b0;
   
   vga_clk_wiz vga_clk_1(.CLK_IN1 (CLK_100MHz), .CLK_OUT1 (vga_clk), .RESET (reset));
   hsync hsync_1(vga_clk, HSync, hblank, line_clk);
   vsync vsync_1(line_clk, VSync, vblank);

   always @ (posedge vga_clk) begin
      if (line_clk) begin
         pixel <= 8'b0;
      end else if (!blank) begin
         pixel <= pixel + 1'b1;
      end
   end 
   
   assign LED[0] = hblank;
   assign LED[1] = vblank;
   assign blank = hblank || vblank;
   assign Red = blank ? 3'b0 : {pixel[0], pixel[1], pixel[2]};
   assign Green = blank ? 3'b0 : {pixel[3], pixel[4], pixel[5]};
   assign Blue = blank ? 2'b0 : {pixel[6], pixel[7]};
endmodule

module hsync(input vga_clk, output hsync, output blank, output line_clk);
   parameter h_res = 1024;
   parameter h_front_porch = 48;
   parameter h_sync = 96;
   parameter h_back_porch = 208;

//   parameter h_res = 640;
//   parameter h_front_porch = 16;
//   parameter h_sync = 96;
//   parameter h_back_porch = 48;
   parameter h_total = h_res + h_front_porch + h_sync + h_back_porch;

   reg [12:0] hcount = 0;
   reg line_clk_state = 0;
   
   always @ (posedge vga_clk) begin
     $monitor("%0t %m, hcount=%d, hsync=%b, blank=%b", $time, hcount, hsync, blank);
     if(hcount < h_total) begin
       hcount <= hcount + 1'b1;
       line_clk_state <= 0;
     end else begin 
       hcount <= 0;
       line_clk_state <= 1;
     end
   end;
   
   

   assign hsync = !(hcount > (h_res + h_front_porch) && hcount <= (h_res + h_front_porch + h_sync));
   assign line_clk = line_clk_state;
   assign blank = hcount > h_res;
endmodule

module vsync(input line_clk, output vsync, output blank);
   parameter v_res = 768;
   parameter v_front_porch = 1;
   parameter v_sync = 3;
   parameter v_back_porch = 36;
   
//   parameter v_res = 480;
//   parameter v_front_porch = 11;
//   parameter v_sync = 2;
//   parameter v_back_porch = 31;
   parameter v_total = v_res + v_front_porch + v_sync + v_back_porch;

   reg [12:0] vcount = 0;

   always @ (posedge line_clk) begin
     $monitor("%0t %m, vcount=%d, vsync=%b, blank=%b", $time, vcount, vsync, blank);
     if(vcount < v_total) begin 
       vcount <= vcount + 1'b1;
     end else begin
       vcount <= 0;
     end
   end
   
   assign vsync = !(vcount > (v_res + v_front_porch) && vcount <= (v_res + v_front_porch + v_sync));
   assign blank = vcount > v_res;
endmodule
