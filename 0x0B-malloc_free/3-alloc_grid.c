#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: NULL if it fails || width or height = 0 || pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int count, count2;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (count = 0; count < height; count++)
	{
		grid[count] = malloc(width * sizeof(int));
		if (grid[count] == NULL)
		{
			for (count2 = 0; count2 < count; count2++)
				free(grid[count2]);
			free(grid);
			return (NULL);
		}
		for (count2 = 0; count2 < width; count2++)
			grid[count][count2] = 0;
	}
	return (grid);
}
