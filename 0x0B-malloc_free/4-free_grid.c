#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory from a 2D grid
 * @grid: pointer to a pointer of the grid
 * @height: number of rows
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
