
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name lab02 -dir "Z:/groups/02/lab02/planAhead_run_1" -part xc7z020clg484-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/groups/02/lab02/lab2_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/groups/02/lab02} }
set_property target_constrs_file "zedboard_master_UCF_RevC_v2.ucf" [current_fileset -constrset]
add_files [list {zedboard_master_UCF_RevC_v2.ucf}] -fileset [get_property constrset [current_run]]
link_design
