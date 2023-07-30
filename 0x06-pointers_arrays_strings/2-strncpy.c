#include "main.h"

/**
 * _strncpy - function to copy string
 *
 * @dest: argument that will recieve the text
 *
 * @src: argument that will copy from it
 *
 * @n: The number of character that will copy
 *
 * Return: return the final text
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
