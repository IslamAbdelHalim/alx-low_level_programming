#include "search_algos.h"

/**
 * advanced_binary_helper - the function that make binary search
 *
 * @array: sorted array
 *
 * @high: the last index of array
 *
 * @low: the first index of array
 *
 * @value: the value to search for
 *
 * Return: First index of value found
 */

int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[high]);

	mid = low + (high - low) / 2;

	if (array[mid] == value && array[mid - 1] != value)
	{
		return (mid);
	}
	else if (array[mid] >= value)
	{
		return (advanced_binary_helper(array, low, mid, value));
	}
	else
	{
		return (advanced_binary_helper(array, mid + 1, high, value));
	}
}

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
	size_t low = 0, high = size - 1;

	if (array == NULL || !size || !value)
	{
		return (-1);
	}

	return (advanced_binary_helper(array, low, high, value));
}
