#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * free_grid - Writing a fxn that frees a 2 dimensional grid
 * previously created by my alloc_grid fxn
 * @grid: Array number two
 * @height: grid height
 *
 * Return: Nothing
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
