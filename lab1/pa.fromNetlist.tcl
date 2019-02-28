
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name lab01 -dir "Z:/groups/02/lab1/planAhead_run_2" -part xc7z020clg484-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/groups/02/lab1/lab1_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/groups/02/lab1} }
set_property target_constrs_file "Z:/groups/02/lab1/lab1.ucf" [current_fileset -constrset]
add_files [list {lab1.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {lab1_interface.ucf}] -fileset [get_property constrset [current_run]]
link_design
