#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a previously allocated memory
 * @grid: the grid
 * @height: grid height
 *
 * Return: void
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
