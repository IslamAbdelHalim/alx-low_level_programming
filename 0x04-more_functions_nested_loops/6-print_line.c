#include "main.h"

/**
 * print_line - Function That print line using _
 *
 * @n: The length of line or the number of _
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
