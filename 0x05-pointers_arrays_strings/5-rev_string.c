#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: array of character
*/

void rev_string(char *s)
{
	int i;

		i = 0;
	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
