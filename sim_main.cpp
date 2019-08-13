#include "Vtop_tv.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);


	Vtop_tv* top = new Vtop_tv();

	top->reset = 0;

	int mem_start = 0xc000;
	int last_tick = 40000;


	int cnt = 0; 
	uint8_t clk = 0;

	while (!Verilated::gotFinish() && cnt < last_tick) {

		// let's give it a couple of cycles to reset
		// I believe Z80's manual specifies 5 cycles
		// This is probably unnecessary here but oh well
		top->reset = cnt < 5 ? 1 : 0;

		// Tick
		top->clk = 0;
	 	top->eval();
		top->clk = 1;
	 	top->eval();

	 	// sanity check
	 	if(cnt % 100 == 1)
	 		printf("> ADDR = %04X", top->addr);

	 	cnt += 1;

	 	// memory sanity check
	 	if(cnt == last_tick)
	 	{
	 		puts("\n\n");
	 		for(int i = 0xf800; i <= 0xffff; i++)
	 			printf("%02X", top->top_tv__DOT__memory__DOT__memory[i]);
	 	}
	}
	delete top;
	exit(0);
}