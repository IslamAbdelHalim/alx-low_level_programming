#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that create 2d array
 *
 * @width: The width of array (row)
 *
 * @height: The column of array
 *
 * Return: The address of 2d array
*/

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocat 2D array*/
	arr = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
	}
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
