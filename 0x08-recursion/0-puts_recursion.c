#include "main.h"
/**
 * _puts_recursion - function that print string
 *
 * @s: The array of string
*/
void _puts_recursion(char *s)
{
		int i;

		for (i = 0; *s != '\0'; s++)
		{
			_putchar(*s);
			i++;
		}
		_putchar('\n');
}
