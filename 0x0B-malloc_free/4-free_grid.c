#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k = 0;

	if (grid == NULL)
		return;
	while (k < height)
		free((int *)grid[k++]);
	free(grid);
}
