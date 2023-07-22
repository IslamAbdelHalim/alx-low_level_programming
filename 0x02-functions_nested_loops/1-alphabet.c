#include "main.h"

/**
 *
 * print_alphabet - utllizes the putchar funtion to print
 * 		The alphabet a -z
*/

void print_alphabet(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
