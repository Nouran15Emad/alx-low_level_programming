#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints LowerCase Alphabet
 *
 *
 */

void print_alphabet(void)
{
	char a2z = 'a';

	while (a2z <= 'z')
	{
		_putchar(a2z);
		a2z++;
	}
	_putchar('\n');
}
