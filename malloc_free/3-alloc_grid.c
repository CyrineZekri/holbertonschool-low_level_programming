#include "main.h"
/**
 ***alloc_grid-fills two dimensional array.
 *@width:input var
 *@height:input var
 *Return:2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{

		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{

			grid[i][j] = 0;
		}
	}
	return (grid);
	free(grid);
}
