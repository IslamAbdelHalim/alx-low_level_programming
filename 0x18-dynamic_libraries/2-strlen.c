#include "main.h"

/**
 * _strlen - function to make any thing
 *
 * @s: The argument
 *
 * Return: Always 0
*/

int _strlen(char *s)
{
	int len;

	for(len = 0; *s != '\0'; s++)
		++len;

	return (len);
}
