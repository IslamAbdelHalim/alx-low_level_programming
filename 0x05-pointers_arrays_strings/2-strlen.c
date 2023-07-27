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
	
	for (i=0; *s != '\0'; s++)
		++i;
	return (i);
}
