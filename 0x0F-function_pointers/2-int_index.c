#include "function_pointers.h"

/**
 * int_index - function
 *
 * @array: The array which has an integars
 *
 * @size: The size of array
 *
 * @cmp: The function which will use to search
 *
 * Return: The index of element or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0 || !cmp)
	{
		return (-1);
	}
	else if (array && size && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
