#include "main.h"
#include <stdlib.h>

/**
 * create_array - fucntion to create array
 *
 * @size: size of array
 *
 * @c: the character of array
 *
 * Return: The char
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
