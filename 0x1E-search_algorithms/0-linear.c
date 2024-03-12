#include "search_algos.h"

/**
 * linear_search - function that make linear search
 *
 * @array: the pointer to the first element of the array
 *
 * @size: the number of element of array
 *
 * @value: the value to search for
 *
 * Return: the first index where value locate
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || !size || size == 0 || !value)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value cheked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
