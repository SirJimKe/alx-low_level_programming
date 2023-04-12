#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: pointer to the 2d array
 * @height: number of rows
 * Return: result
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
