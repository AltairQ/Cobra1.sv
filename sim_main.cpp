#include "Vtop_tv.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);


	Vtop_tv* top = new Vtop_tv();

	top->reset = 0;


	int cnt = 0; 
	uint8_t clk = 0;

	// for(int i = 0; i < 20; i++)
	// std::cout << (int) top->top_tv__DOT__memory__DOT__memory[i] << std::endl;

	while (!Verilated::gotFinish() && cnt < 10) {

		top->reset = cnt < 10 ? 1 : 0;

		top->clk = 0;
	 	top->eval();
		top->clk = 1;
	 	top->eval();

	 	cnt += 1;

	 	if(cnt == 1)
	 		for(int i = 0; i < 20; i++)
	 			printf("%02X\n",  top->top_tv__DOT__memory__DOT__memory[i]);
	}
	delete top;
	exit(0);
}