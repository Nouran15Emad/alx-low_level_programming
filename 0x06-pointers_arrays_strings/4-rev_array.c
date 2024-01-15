#include <stdio.h>
#include "main.h"

/**
*reverse_array - reverses an array of integers
*@a: pointer to an integer
*@n: the number of the array elements
*Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int swap = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
		i++;
	}
}
