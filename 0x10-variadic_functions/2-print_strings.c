#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints any number of string
 *
 * @separator: separator argument
 *
 * @n: number of argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list name;

	va_start(name, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(name, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s%s", s, (i < n - 1) ? (separator ? separator : "") : "\n");
		}
	}
	va_end(name);
}
