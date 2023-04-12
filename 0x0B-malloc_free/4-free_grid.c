#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees space of 2d array
 * @grid: 2d grid
 * @height: height of grid
 * Description: frees memory
 * Return: nothing
 */

void free_grid(int **grid, int height)

{
	int j;

	for (j = 0; j < height; j++)

	{
		free(grid[j]);

	}

	free(grid);
}
