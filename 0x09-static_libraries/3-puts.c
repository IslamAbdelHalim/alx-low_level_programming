#include "main.h"

/**
 * _puts - function to print the string
 *
 * @str: Array of character
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		++i;
	}
	_putchar('\n');
}

