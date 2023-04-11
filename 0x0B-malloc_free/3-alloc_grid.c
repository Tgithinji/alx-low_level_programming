#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: Pointer to the array or NULL incase of failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		/* if allocation fails, free all allocated memory */
		if (grid[i] == NULL)
		{
			for (j = 0; j < 1; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
