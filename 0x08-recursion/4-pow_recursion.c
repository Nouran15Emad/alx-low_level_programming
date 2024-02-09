#include <stdio.h>
#include "main.h"

/**
*_pow_recursion - returns the value of x raised to the power of y
*@x: an integer
*@y: the power number
*Return: the ineger x powered by y;
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)/*bsae case*/
	{
		return (1);
	}
	else if (y < 0)/*Edge case*/
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));/*Recursive case*/
}
