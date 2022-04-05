#include "main.h"
#include <stdio.h>

/**
 * free_grid - a function that frees a two dimensional grid previously
 * created by your 'alloc_grid' function
 * @grid: multidimensional array of integers
 * @height: height of the grid
 * Return: Success
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
