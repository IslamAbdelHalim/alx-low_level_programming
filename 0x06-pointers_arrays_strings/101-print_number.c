#include "main.h"

/**
 * print_number - function use to print number
 *
 * @n: The number
*/

void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10 != 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');

}
