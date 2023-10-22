#include <stdio.h>
#include "main.h"

/**
*print_last_digit - A function that prints the last digit of a number
*@n: An integer that the func takes
*Return: The last digit of a number (integer)
*/

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}

	putchar('0' + ld);
	return (ld);
}
