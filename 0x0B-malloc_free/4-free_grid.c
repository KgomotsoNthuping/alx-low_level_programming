#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - two dimensional array
 * @grid: two dimensional grid
 * @height: height of the grid
 * Description: makes space for memory
 * Return: space
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
