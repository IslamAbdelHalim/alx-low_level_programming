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
	int nump;

	va_list num;

	va_start(num, n);

	if (n != 0 && separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				nump = va_arg(num, int);
				printf("%d", nump);
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
		printf("\n");
	}
}
