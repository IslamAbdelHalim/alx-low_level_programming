#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: first argument 
 *
 * @b: second argument
 *
 * @n: third argument
 *
 * Return: The final value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int is;

	for (is = 0; n > 0; is++, n--)
	{
		s[is] = b;
	}

	return (s);
}
