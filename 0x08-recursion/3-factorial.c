#include <stdio.h>
#include "main.h"

/**
*factorial - Calculate the Factorial of a given number
*@n : integer number
*Return: the result>> the factorial
*/

int factorial(int n)
{
	if (n == 0)/*Base Case*/
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);/*Edge Case*/
	}

	return (n * factorial(n - 1));/*Recursive Procedure*/
}
