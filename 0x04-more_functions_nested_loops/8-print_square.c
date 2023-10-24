#include <stdio.h>
#include "main.h"

/**
*print_square - print square of #
*@size: integer is the size of square
*
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
