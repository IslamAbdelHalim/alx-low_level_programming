#include "main.h"

/**
 * _print_rev_recursion - fucntion to print a string reverse
 *
 * @s: The array of character
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
