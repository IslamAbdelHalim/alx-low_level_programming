#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function That alloc memory
 *
 * @b: The size of memory
 *
 * Return: The address of memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
