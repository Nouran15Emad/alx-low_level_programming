#include <stdio.h>
#include "main.h"

/**
*print_to_98 - function that prints all natural numbers from n to 98
*@n: integer
*
*/


void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d%s", n, (n != 98) ? ", " : "\n");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d%s", n, (n != 98) ? ", " : "\n");
			n--;
		}
	}

}
