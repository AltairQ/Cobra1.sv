# COBRA 1.sv

This is the main directory containing the Quartus project files (`CobraDE2.qpf` being the main file) and the `Cobra1sv` subdirectory.

The subdirectory contains all platform-independent code (the main module, VGA controller etc) and all required resources. It contains four subdirectories:
 * `Cobra1sv/tv80_core` - a local copy of the open source TV80 project (Zilog Z80 Verilog model).
 * `Cobra1sv/res` - the font data (`chr`) and the MONITOR dump (`cobra_rom`) in multiple file formats. The `.mif` files are used by the memory IP Cores for initialisation.
 * `Cobra1sv/tapes` - the recording of BASIC TRS tape, which can be used to load the interpreter into the model.
 * `Cobra1sv/tools` -  `cobrawave` and `rawwave` scripts which can be used to extract raw data from MONITOR tape recordings and raw samples from `wav` files respectively. These are in experimental state and serve mostly as a helper for debugging the model.