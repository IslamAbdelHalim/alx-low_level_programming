#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function to ceate array of int
 *
 * @min: The start of array
 *
 * @max: The end of array
 *
 * Return: The pointer of array
*/

int *array_range(int min, int max)
{
	int *arr;
	int i = min;

	if (min > max)
		return (NULL);

	arr = malloc(max * sizeof(int) + 1);
	if (arr == NULL)
		return (NULL);
	for (; i <= max; i++)
		arr[i] = i;
	return (arr);
}
