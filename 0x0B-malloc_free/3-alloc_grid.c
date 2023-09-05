#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- return a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: 0 or Null.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * 8);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * 4);
		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
