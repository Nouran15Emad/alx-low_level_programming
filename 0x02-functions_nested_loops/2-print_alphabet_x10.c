#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - a function that prints alph ten times
*
*
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a2z = 'a';

		while (a2z <= 'z')
		{
			_putchar(a2z);
			a2z++;
		}

		_putchar('\n');
		i++;
	}

}
