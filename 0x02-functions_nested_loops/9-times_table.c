#include "main.h"
#include <stdio.h>
/**
 * times_table - function to print time tables
*/

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			num = i * j;

			if (num <= 9)
				_putchar(' ');
			else
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
