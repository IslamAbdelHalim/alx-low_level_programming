#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies string from var1 to var2
 *
 * @dest: var2
 *
 * @src: var1 source
 *
 * Return: The result var1(dest)
*/

char *_strcpy(char *dest, char *src)
{
	int s, d;
	char *ptr;

	if (src == NULL)
		printf("\n");

	for (s = 0; src[s] != '\0'; s++)
		;
	s++;
	for (d = 0; d <= s; d++)
	{
		dest[d] = src[d];
	}
	ptr = dest;
	return (ptr);
}
