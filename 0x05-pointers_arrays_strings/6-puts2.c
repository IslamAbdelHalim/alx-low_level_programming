#include "main.h"

/**
 * puts2 - function that prints every other character
 *
 * @str: array of character
*/

void puts2(char *str)
{
	long int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
