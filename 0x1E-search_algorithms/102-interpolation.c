#include "search_algos.h"

/**
 * interpolation_search - function that make a search
 *
 * @array: the array to search in
 *
 * @size: the size of array
 *
 * @value: The value of to search for
 *
 * Return: The first index where value is locate
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || !size || !value)
		return (-1);

	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
	}

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
