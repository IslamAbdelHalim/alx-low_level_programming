#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all argument
 *
 * @n: last named 
 *
 * Return: The sum of number
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
        int sum = 0;
	va_list num;
	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	return (sum);
}
