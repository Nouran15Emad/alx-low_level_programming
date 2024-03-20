#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: integer > the width of 2 d array
 * @height: integer > the height of 2 d array
 * Return: pointer to 2d array (Success), NULL (fail)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	/* check w h if negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* malloc to width (rows) and malloc null check */
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	/* malloc to height (cols) for each row and malloc null check */
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			/* Free the memory allocated so far */
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
	}
	/* initialization */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
