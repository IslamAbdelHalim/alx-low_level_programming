#include "main.h"

/**
 * print_number - function to print number
 *
 * @n: The number
*/

void print_number(int n)
{
	/* check if n less than 0 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* reduce the number untile become on digit */
	if ((n / 10) > 0)
	{
		/*if(n / 10) > 10 make the same functio */
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
