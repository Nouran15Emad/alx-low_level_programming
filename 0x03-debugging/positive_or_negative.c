#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Check the integer given Randomly and print its case
 *
 * Return: Always 0 (Sucess)
 */

int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
