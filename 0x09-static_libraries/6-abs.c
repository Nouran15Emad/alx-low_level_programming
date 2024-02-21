#include <stdio.h>
#include "main.h"

/**
*_abs - function that computes the absolute value of an integer
*@m: an integer that the fun takes to compute its abs value
*Return: an integer m after being absoluted
*/

int _abs(int m)
{
	if (m < 0)
	{
		return (m * -1);
	}
	else if (m >= 0)
	{
		return (m);
	}

	return (0);
}
