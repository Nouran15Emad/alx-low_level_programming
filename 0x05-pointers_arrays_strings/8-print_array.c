#include <stdio.h>
#include "main.h"

/**
*print_array - prints n elements of an array of integers
*@a: pointer to an integer array
*@n: integer the number of array elements
*
*Return: Nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= (n - 1))
	{
		if (i == (n - 1))
		{
			printf("%d", *(a + i));
		}
		else
		{
			 printf("%d, ", *(a + i));
		}
		i++;
	}

	printf("\n");
}
