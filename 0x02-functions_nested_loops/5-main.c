#include "main.h"

/**
*main - Calls a fnction that print the sign of a number
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	int r, h, m;

	r = print_sign(15);
	h = print_sign(0);
	m = print_sign(-125);


	_putchar(r + '0');
	_putchar('\n');

	_putchar(h + '0');
	_putchar('\n');

	_putchar(m + '0');
	_putchar('\n');
	return (0);
}
