#include <stdio.h>
#include "main.h"

/**
*times_table - a function that prints the nine times table, starting with zero
*
*
*/

void times_table(void)
{
	int n = 0;
	int m = 0;

	while (m < 10)
	{
		while (n < 10)
		{
			printf("%d, ", (n*m));
			n++;
		}
		n = 0;
		m++;
		putchar('\n');
	}
}
