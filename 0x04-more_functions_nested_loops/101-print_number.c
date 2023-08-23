#include "main.h"

/**
 * print_number - function to print number
 *
 * @n: The number
*/

void print_number(int n)
{
	unsigned int num = n;
	/* check if n less than 0 */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	/* reduce the number untile become on digit */
	if ((num / 10) > 0)
	{
		/*if(n / 10) > 10 make the same functio */
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
