#include <stdio.h>
#include "main.h"

/**
*times_table - a function that prints the nine times table, starting with zero
*
*
*/

void times_table(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else
			{
				printf("%2d", i * j);
			}

			if (j != 9)
			{
				printf(", ");
			}
			j++;
		}
		printf("\n");
		i++;
	}

}
