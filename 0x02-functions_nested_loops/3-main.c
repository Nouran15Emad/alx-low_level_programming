#include <stdio.h>
#include "main.h"

/**
*main - Calling _islower function
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	int c, m, n;

	c = _islower('z');
	m = _islower('V');
	n = _islower('B');

	_putchar(c + '0');
	_putchar(m + '0');
	_putchar(n + '0');
	_putchar('\n');

	return (0);
}
