#include "main.h"

/**
 * print_alphabet_x10: any thing intial shor description
 *
 * print_alphabet_x10: to print all alphabet from a - z
 *
 *  prototype: print alphabet 10 time
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
