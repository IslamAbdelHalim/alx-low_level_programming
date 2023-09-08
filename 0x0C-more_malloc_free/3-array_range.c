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
	int i, size;;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
