#include "function_pointers.h"

/**
 * int_index - function to find the an integer
 *
 * @array: array pf integer
 *
 * @size: The number of elements
 *
 * @cmp: function to compare The values
 *
 * Return: the index of the first element
 * and return -1 if no element of <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}

		}
	}
	return (-1);
}
