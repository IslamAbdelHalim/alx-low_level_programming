#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - function fills memory with constant
 *
 * @s: The arry
 *
 * @b: The constant
 *
 * @n: The size
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - function that allocat memory
 *
 * @nmemb: The number of memory
 *
 * @size: The size
 *
 * Return: The address of memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
		return (NULL);

	return (arr);
}
