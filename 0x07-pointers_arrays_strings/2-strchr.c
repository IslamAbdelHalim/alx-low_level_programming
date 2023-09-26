#include "main.h"

/**
 * _strchr - function that locates a character
 *
 * @s: The array of string
 *
 * @c: The charachter
 *
 * Return: The pointer of first char
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
