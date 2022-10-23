#include "main.h"
/**
 *free_grid-frees two dimensional array.
 *@grid:input var
 *@height:input var
 *Return:2D array
 */
void free_grid(int **grid, int height)
{
	int i;
	int *discharge = NULL;

	for (i = 0; i < height; i++)
	{
		discharge = *(grid + i);
		free(discharge);
	}
}
