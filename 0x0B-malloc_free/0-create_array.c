#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of char
 *
 * @size: The size of array
 *
 * @c: The type of array
 *
 * Return: The address of array
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (NULL);

	while (size--)
		arr[size] = c;

	return (arr);
}
