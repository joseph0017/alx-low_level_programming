#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: argument
 * @height: argument
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		i++;
		free(grid[i]);
	}
	free(grid);
}
