#include "main.h"

/**
 * print_binary - function that print binary
 *
 * @n: The decimal number
*/

void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8;
	int i = 0;

	while (num)
	{
		if (n & 1l << --num)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
	}
	if (!i)
		_putchar('0');

}
