#include "main.h"

/**
 * _strcat - function to concates two strings
 *
 * @dest: first word or first input
 *
 * @src: second input
 *
 * Return: return a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
		i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
