#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: The array which will use
 *
 * @size: The size of array
 *
 * @action: The function that print the element
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
