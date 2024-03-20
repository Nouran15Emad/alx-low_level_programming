#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*free_grid - free a 2 dimensional grid created by alloc_grid function
*@**grid: grid of integers
*@height: integer the height of grid
*Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
	{
		return;
	}

	/*Free memory for each row */
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	/*Free memory for the array of pointers to rows*/
	free(grid);

}
