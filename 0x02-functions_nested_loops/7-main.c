#include <stdio.h>
#include "main.h"

/**
*main - Calls a func that return the last digit of integer
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);

	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
