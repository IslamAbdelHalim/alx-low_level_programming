#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
