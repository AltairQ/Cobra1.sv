#include "Vtop_tv.h"
#include "verilated.h"
#include <cstdio>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

#include "keycaps.h"

// Terminal setup code taken from
// https://www.gnu.org/software/libc/manual/html_node/Noncanon-Example.html
struct termios saved_attributes;

void reset_input_mode()
{
	tcsetattr (STDIN_FILENO, TCSANOW, &saved_attributes);
}

void set_input_mode()
{
	struct termios tattr;
	char *name;

  /* Make sure stdin is a terminal. */
	if (!isatty (STDIN_FILENO))
	{
		fprintf (stderr, "Not a terminal.\n");
		exit (EXIT_FAILURE);
	}

  /* Save the terminal attributes so we can restore them later. */
	tcgetattr (STDIN_FILENO, &saved_attributes);
	atexit (reset_input_mode);

  /* Set the funny terminal modes. */
	fcntl(0, F_SETFL, fcntl(0, F_GETFL) | O_NONBLOCK);

	tcgetattr (STDIN_FILENO, &tattr);
	tattr.c_lflag &= ~(ICANON|ECHO); /* Clear ICANON and ECHO. */
	tattr.c_cc[VMIN] = 1;
	tattr.c_cc[VTIME] = 0;
	tcsetattr (STDIN_FILENO, TCSAFLUSH, &tattr);
}

// This is to provide a runtime parameter in mem_module.sv
static std::string rom_hex;
extern "C" const char* rom_hex_file()
{
	return rom_hex.c_str();
}

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);

	set_input_mode();

	char keycap;
	int keystate_ttl = 0;
	uint64_t keystate = 0;

	// Read the ROM hex file path
	const char* str;
	str = Verilated::commandArgsPlusMatch("rom_file=");
	if(str && str[0]) rom_hex = str + 10;


	Vtop_tv* top = new Vtop_tv();
	top->kb_state = 0;

	// CPU @ 3.25 MHz
	// PAL @ 50 Hz
	// 64935 ticks = 1 frame
	const int f2t = 64935;
	int last_tick = 30 * 50 * f2t; // 30 seconds


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
		cnt += 1;
		keystate_ttl -= (keystate_ttl == 0)?0:1;

		// Emulate keyboard
		top->kb_state = (keystate_ttl > 0) ? keystate : 0;

		// Emulate 50 Hz refresh rate (not at all real-time)
		if(cnt % f2t == 0)
		{
			// UNIX clear screen
			printf("\e[1;1H\e[2J");
			printf("Progress: %d / %d\n", (cnt/f2t), (last_tick/f2t) );

			// Print out VRAM contents
			for(int i = 0xf800; i <= 0xfb00; i++)
			{
				printf("%c", (char)top->top_tv__DOT__memory__DOT__memory[i]);
				if(i % 32 == 31) puts("");
			}

			// Read keyboard state
			if(read(STDIN_FILENO, &keycap, 1) == 1)
			{
				keystate = ascii_to_keystate(keycap);
				keystate_ttl = 3*f2t;
			}
		}

		// Writing 0xAA to 0xC888 triggers success, used for testing
		if(top->addr == 0xc888 &&
			top->top_tv__DOT__cpu_dout == 0xaa &&
			(1 & top->top_tv__DOT__wr_n) == 0)
		{
			printf("Success! (address triggered)\n");
			return 0;
		}
	}
	
	delete top;

	puts("Timeout");
	return 0;
}