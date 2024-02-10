#include <stdio.h>
#include "main.h"

/**
*_sqrt_recursion - Calculate the square root for a num
*@n: integer number
*Return: the square root of a number
*/

int _sqrt_recursion(int n)
{


	/*Base cases:*/
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1, n));
}
int _sqrt_helper(int n, int start, int end)
{
	int mid;

	/*recursive procedure*/
	if (start <= end)
	{
		mid = (start + end) / 2;

		if (n == mid * mid)
		{
			return (mid);

		}

		else if (n < mid * mid)
		{
			return (_sqrt_helper(n, start, mid - 1));

		}
		else
		{
			return (_sqrt_helper(n, mid + 1, end));

		}

	}


	return (-1);

}
