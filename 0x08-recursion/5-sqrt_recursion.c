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
	

	return _sqrt_helper(n, 1);

}


/**
*_sqrt_helper - check if the input is natural square root or not
*@n: integer number >> the square number
*@start: start guess number or the start of research (integer)
*@end: the n number too or the end of research (integer)
*Return: the square root of a number >> integer
*/

int _sqrt_helper(int n, int num)
{

	/*recursive procedure*/
	

		if (num * num == n)
		{
			return (num);

		}

		else if (n < num * num)
		{
			return (- 1);

		}
		
	return (_sqrt_helper(n, num + 1));




}
