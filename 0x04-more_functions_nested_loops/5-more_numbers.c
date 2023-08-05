#include "main.h"

/**
 * more_numbers - function to print numbers
*/

void more_numbers(void)
{
	int f, i, num;

	for (f = 0; f < 10; f++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if ( i >= 10)
			{
				_putchar (1 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
