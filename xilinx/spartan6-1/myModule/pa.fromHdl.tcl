
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name myModule -dir "/home/dsabanin/projects/embedded/xilinx/spartan6-1/myModule/planAhead_run_3" -part xc6slx9csg324-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "/home/dsabanin/projects/embedded/xilinx/mimasv2_user_constraints_file.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {myModule.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top myModule $srcset
add_files [list {/home/dsabanin/projects/embedded/xilinx/mimasv2_user_constraints_file.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9csg324-2
