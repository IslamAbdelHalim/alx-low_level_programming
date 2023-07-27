#include "main.h"

/**
 * _strlen - function to know the length of string
 *
 * @s: input string or Array of character
 *
 * Return: The length of string
*/

int _strlen(char *s)
{
	int i;
		i = 0;

	do {
		i++;
	} while (s[i] != '\0');
	return (i);
}
