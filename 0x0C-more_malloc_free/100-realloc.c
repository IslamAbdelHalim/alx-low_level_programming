#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function to reallocate memory
 *
 * @ptr: The old memory
 *
 * @old_size: The old size of memory
 *
 * @new_size: The new_size of memory
 *
 * Return: The pointer to a new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *nptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i <= old_size; i++)
	{
		*((char *)nptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (nptr);
}
