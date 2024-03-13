#include "search_algos.h"

/**
 * exponential_search - function that make expos search
 *
 * @array: the array to search in
 *
 * @size: the size of array
 *
 * @value: the value of array
 *
 * Return: the index of array
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low, high, j;

	if (array == NULL || !size || !value)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
	low = i / 2;
	high = (i + (size - 1)) / 2;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (j = low; j < high; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[high]);

		if (array[(low + high) / 2] == value)
		{
			return ((low + high) / 2);
		}
		else if (array[(low + high) / 2] < value)
		{
			low = (low + high) / 2 + 1;
		}
		else
		{
			high = (low + high) / 2 - 1;
		}
	}
	return (-1);
}
