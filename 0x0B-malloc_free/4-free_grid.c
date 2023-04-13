#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);
}
