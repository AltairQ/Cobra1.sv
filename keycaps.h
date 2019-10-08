#ifndef KEYCAPS_H
#define KEYCAPS_H

/*
Layout is as follows:
1  2  3  4  5
Q  W  E  R  T
A  S  D  F  G
SH Z  X  C  V
SP ,  M  N  B
CR L  K  J  H
P  O  I  U  Y
0  9  8  7  6
*/

uint64_t ascii_to_keystate(char c)
{
	switch(c){
		case '1': return 1l<<(0);
		case '2': return 1l<<(1);
		case '3': return 1l<<(2);
		case '4': return 1l<<(3);
		case '5': return 1l<<(4);
		case 'q': return 1l<<(5);
		case 'w': return 1l<<(6);
		case 'e': return 1l<<(7);
		case 'r': return 1l<<(8);
		case 't': return 1l<<(9);
		case 'a': return 1l<<(10);
		case 's': return 1l<<(11);
		case 'd': return 1l<<(12);
		case 'f': return 1l<<(13);
		case 'g': return 1l<<(14);
		// case 'shift': return 1l<<(15);
		case 'z': return 1l<<(16);
		case 'x': return 1l<<(17);
		case 'c': return 1l<<(18);
		case 'v': return 1l<<(19);
		case ' ': return 1l<<(20);
		case ',': return 1l<<(21);
		case 'm': return 1l<<(22);
		case 'n': return 1l<<(23);
		case 'b': return 1l<<(24);
		case '\n': return 1l<<(25);
		case 'l': return 1l<<(26);
		case 'k': return 1l<<(27);
		case 'j': return 1l<<(28);
		case 'h': return 1l<<(29);
		case 'p': return 1l<<(30);
		case 'o': return 1l<<(31);
		case 'i': return 1l<<(32);
		case 'u': return 1l<<(33);
		case 'y': return 1l<<(34);
		case '0': return 1l<<(35);
		case '9': return 1l<<(36);
		case '8': return 1l<<(37);
		case '7': return 1l<<(38);
		case '6': return 1l<<(39);
	}
}

#endif