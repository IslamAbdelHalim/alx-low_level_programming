#include "main.h"

/**
 * puts_half - function to print half of string
 *
 * @str: the character
*/

void puts_half(char *str)
{
	long int i;

		i = 0;
	while (str[i])
	{
		i++;
	}

	i++
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
