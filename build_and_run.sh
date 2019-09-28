verilator --cc top_tv.sv -Itv80_core --exe sim_main.cpp && 
make -j -C obj_dir -f Vtop_tv.mk Vtop_tv &&
./obj_dir/Vtop_tv +rom_file=./res/cobra_rom.hex
