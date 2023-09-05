#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that free 2d array
 *
 * @grid: The 2d array
 *
 * @height: The height of 2d
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid[i]);
}
