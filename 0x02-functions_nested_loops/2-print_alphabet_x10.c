#include "main.h"

/**
 * print_alphabet_x10 - This is a function to print
 *	This file contain function to print alphabet from a - z 10 times
 *
 * prototype: print alphabet 10 time
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
