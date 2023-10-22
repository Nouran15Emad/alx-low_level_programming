#include <stdio.h>
#include "main.h"

/**
*main - Calling isalpha fun
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	int a, b, c, m;

	a = _isalpha('D');
	b = _isalpha(1080);
	c = _isalpha('c');
	m = _isalpha(852);

	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
	_putchar(m + '0');
	_putchar('\n');


	return (0);
}
