#include <stdio.h>
#include "main.h"

/**
*print_line- print line on treminal
*
*Return: Always 0 (Sucess)
*/

void print_line(int n)
{

	int i ;
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}