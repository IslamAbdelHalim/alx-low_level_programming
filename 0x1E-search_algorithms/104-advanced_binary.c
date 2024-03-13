#include "search_algos.h"

/**
 * advanced_binary - function that make binary search
 *
 * @array: the array to search in
 *
 * @size: the size of array
 *
 * @value: the value of array
 *
 * Return: the index of array
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] < value)
				return (mid);
			high = mid;
		}
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid;
	}
	return (-1);
}
