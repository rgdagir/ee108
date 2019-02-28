
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name lab02 -dir "Z:/groups/02/lab02/planAhead_run_2" -part xc7z020clg484-3
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "Z:/groups/02/lab02/lab2_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/groups/02/lab02} }
set_property target_constrs_file "zedboard_master_UCF_RevC_v2.ucf" [current_fileset -constrset]
add_files [list {zedboard_master_UCF_RevC_v2.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "Z:/groups/02/lab02/lab2_top.ncd"
if {[catch {read_twx -name results_1 -file "Z:/groups/02/lab02/lab2_top.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"Z:/groups/02/lab02/lab2_top.twx\": $eInfo"
}
