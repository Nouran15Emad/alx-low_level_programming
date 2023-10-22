#include <stdio.h>
#include "main.h"

/**
*print_last_digit - A function that prints the last digit of a number
*@n: An integer that the func takes
*Return: The last digit of a number (integer)
*/

int print_last_digit(int n)
{
	n = (n % 10);
	putchar('0' + n);
	return (n);
}
