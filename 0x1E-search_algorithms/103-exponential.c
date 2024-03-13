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
	size_t i = 1, j = 0, min = 0, max = 0;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	max = i < size - 1 ? i : size - 1;
	min = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", min, max);
	while (min <= max)
	{
		printf("Searching in array: ");
		for (j = min; j < max; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[max]);
		i = (min + max) / 2;
		if (array[i] < value)
		{
			min = i + 1;
		}
		else if (array[i] > value)
		{
			max = i - 1;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}
