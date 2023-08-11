#include "main.h"

/**
 * print_triangle - function to make triangle form
 *
 * @size: the size of triangle
*/

void print_triangle(int size)
{
	int space, hash, line;

	for (line = 0; line < size; line++)
	{
		for (space = line; space < size; space++)
		{
			_putchar(32);
		}

		for (hash = 0; hash <= line; hash++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
