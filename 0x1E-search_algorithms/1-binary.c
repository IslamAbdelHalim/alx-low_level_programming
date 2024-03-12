#include "search_algos.h"

/**
 * binary_search - the function that make binary search
 *
 * @array: sorted array
 *
 * @size: the size of array
 *
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid, i;

	if (array == NULL || !size || !value)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);

		mid = (high + low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return (-1);
}
