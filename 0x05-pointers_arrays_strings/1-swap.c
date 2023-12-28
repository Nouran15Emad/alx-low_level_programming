#include <stdio.h>
#include "main.h"

/**
*swap_int - Write a function that swaps the values of two integers
*@a: pointer to an integer
*@b: pointer to an integer
*
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
