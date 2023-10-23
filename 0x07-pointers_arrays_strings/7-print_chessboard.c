#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Print the chess board
 * @a: pointer to array of length 8 to char value
 *
 */
void print_chessboard(char (*a)[8])
{
	int i,j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
