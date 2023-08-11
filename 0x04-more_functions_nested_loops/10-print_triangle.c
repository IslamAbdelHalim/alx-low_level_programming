#include "main.h"

/**
 * print_triangle - function to make triangle form
 *
 * @size: the size of triangle
*/

void print_triangle(int size)
{
	int high, line;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (high = 1; high <= size; high++)
		{
			for (line = 1; line <= size; line++)
			{
				if ((high + line) <= size)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
