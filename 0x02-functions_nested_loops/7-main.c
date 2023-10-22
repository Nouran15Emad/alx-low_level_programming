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


	print_last_digit(158);
	print_last_digit(74);
	print_last_digit(0);
	print_last_digit(8000);

	r = print_last_digit(1897);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
