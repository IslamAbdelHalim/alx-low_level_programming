#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints time tables
 *
 * @n: the argument function
*/

void print_times_table(int n)
{
	int i, j, num;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			num = j * i;

			if (num <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + 48);
			}
			else if (num <= 99)
			{
				_putchar(' ');
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);

			}
			else
			{
				_putchar((num / 100) + 48);
				_putchar(((num / 10) % 10) + 48);
				_putchar((num % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
