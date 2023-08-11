#include "main.h"

/**
 * print_square - function to make a sequar form
 *
 * @n: The dimention of form
*/

void print_square(int n)
{
	int length, width;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (length = 1; length <= n; length++)
		{
			for (width = 1; width <= n; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
