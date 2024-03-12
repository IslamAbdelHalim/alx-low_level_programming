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

	while (low <= high)
	{
		if (high > size)
		{
			high = size;
		}
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[high] >= value || high == size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; low < high; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}

				if (high == size && array[i] != value)
				{
					return (-1);
				}
			}
		}
		else
		{
			low = high;
			high += step;
		}
	}

	return (-1);
}
