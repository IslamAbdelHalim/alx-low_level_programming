#include "variadic_functions.h"
#include <stdio.h>

/**
 * format_char - when format it char
 *
 * @separator: The separatore
 *
 * @ch: argument pointer
*/

void format_char(char *separator, va_list ch)
{
	printf("%s%c", separator, va_arg(ch, int));
}

/**
 * format_integer - when format it char
 *
 * @separator: The separatore
 *
 * @ch: argument pointer
*/

void format_integer(char *separator, va_list ch)
{
	printf("%s%d", separator, va_arg(ch, int));
}

/**
 * format_float - when format it char
 *
 * @separator: The separatore
 *
 * @ch: argument pointer
*/

void format_float(char *separator, va_list ch)
{
	printf("%s%f", separator, va_arg(ch, double));
}

/**
 * format_string - when format it char
 *
 * @separator: The separatore
 *
 * @ch: argument pointer
*/

void format_string(char *separator, va_list ch)
{
	char *str = va_arg(ch, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);

}

/**
 * print_all - function to print anything
 *
 * @format: the list of format
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list arg;

	forms_t forms[] = {
		{"c", format_char},
		{"i", format_integer},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (forms[j].token)
		{
			if (format[i] == forms[j].token[0])
			{
				forms[j].f(separator, arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
