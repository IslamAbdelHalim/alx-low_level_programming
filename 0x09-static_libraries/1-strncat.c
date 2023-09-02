#include "main.h"

/**
 * _strncat - function to concate two strings
 *
 * @dest: The first argument
 *
 * @src: The second argument
 *
 * @n: The Third argument
 *
 * Return: return The final string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j + i] = src[j];
	dest[j + i] = '\0';
	return (dest);
}
