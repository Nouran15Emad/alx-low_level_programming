#include <stdio.h>
#include "main.h"

/**
*print_triangle - print triangle on terminal
*@size: integer triangle size
*
*/
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
