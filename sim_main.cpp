#include "Vtop_tv.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);


	Vtop_tv* top = new Vtop_tv();

	top->reset = 0;


	int cnt = 0; 
	uint8_t clk = 0;

	for(int i = 0; i < 20; i++)
	std::cout << (int) top->top_tv__DOT__memory__DOT__memory[i] << std::endl;

	while (!Verilated::gotFinish() && cnt < 100) {

		top->reset = cnt < 10 ? 1 : 0;

		top->clk = 0;
	 	top->eval();
		top->clk = 1;
	 	top->eval();

	 	cnt += 1;

	 	std::cout << (uint16_t)top->addr << ", " << (int)top->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC << "\n";
	}
	delete top;
	exit(0);
}