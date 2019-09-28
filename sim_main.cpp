#include "Vtop_tv.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>

// This is to provide a runtime param in mem_module.sv
static std::string rom_hex;
extern "C" const char* rom_hex_file()
{
	return rom_hex.c_str();
}

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);

	// Read the rom hex file path
	const char* str;
	str = Verilated::commandArgsPlusMatch("rom_file=");
	if(str && str[0]) rom_hex = str + 10;


	Vtop_tv* top = new Vtop_tv();
	int last_tick = 3*100000;


	int cnt = 0; 
	uint8_t clk = 0;

	while (!Verilated::gotFinish() && cnt < last_tick) {
		// Let's give it a couple of cycles to reset
		// I believe Z80 manual specifies 5 cycles
		// Probably one cycle is necessary in this model
		top->reset = cnt < 2 ? 1 : 0;

		// Tick
		top->clk = 0;
		top->eval();
		top->clk = 1;
		top->eval();

	 	// sanity check
		if(0)
			printf("> ADDR = %04X\n", top->addr, top->top_tv__DOT__memory_reloc_enable);

		cnt += 1;

	 	// Writing 0xaa to 0xc888 triggers success, used for testing
		if(top->addr == 0xc888 &&
			top->top_tv__DOT__cpu_dout == 0xaa &&
			(1 & top->top_tv__DOT__wr_n) == 0)
		{
			printf("Success! (address triggered)\n");
			return 0;
		}

		// Print out the VRAM at the end
	 	if(cnt == last_tick)
	 	{
	 		// UNIX clear screen (?)
	 		printf("\e[1;1H\e[2J");
	 		for(int i = 0xf800; i <= 0xfb00; i++)
	 		{
	 			printf("%c", (char)top->top_tv__DOT__memory__DOT__memory[i]);
	 			if(i % 32 == 0) puts("");
	 		}
	 	}
	}
	
	delete top;
	std::cout << "Timeout" << std::endl;
	return 0;
}