#include "main.h"

/**
 * print_triangle - function to make triangle form
 *
 * @size: the size of triangle
*/

void print_triangle(int size)
{
	int space, hash, line;

	for (line = 1; line <= size; line++)
	{
		for (space = line; space < size; space++)
		{
			_putchar(' ');
		}

		for (hash = 1; hash <= line; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
