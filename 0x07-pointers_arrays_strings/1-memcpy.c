#include "main.h"

/**
 * _memcpy - function that copy memory
 *
 * @dest: argument
 *
 * @src: argument 2
 *
 * @n: number of bytes
 *
 * Return: the pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
