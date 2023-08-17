#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes function
 *
 * @array: first arrgument array of element
 *
 * @size: size of array
 *
 * @action: pointer to function you need to use
 *
 * @(*action)(int): the argument of function that we pointer
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;
	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}
