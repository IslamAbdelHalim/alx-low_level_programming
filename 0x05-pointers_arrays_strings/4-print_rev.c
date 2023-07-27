#include "main.h"

/**
 * print_rev - function to prints string in reverse
 *
 * @s: string input
*/

void print_rev(char *s)
{
	int i;
		i = 0;
	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
