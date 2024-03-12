#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that make a jump search
 *
 * @array: the orderd array
 *
 * @size: the size of array
 *
 * @value: the value for search
 *
 * Return: The index of value if found or return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t low = 0, high = step, i;

	if (array == NULL || !size || !value)
		return (-1);

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low = high;
		high += step;

		if (high > size)
			high = size;
	}

	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (i = low; i < high; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (i == size - 1)
			return (-1);

		if (array[i] > value)
			return (-1);
	}

	return (-1);
}
