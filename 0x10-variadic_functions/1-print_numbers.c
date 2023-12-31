#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers sperated by comma
 *
 * @separator: is an argument
 *
 * @n: The number of argument
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(num, int), (i < (n - 1)) ?
				(separator ? separator : "") : "\n");
	}
	va_end(num);
}
