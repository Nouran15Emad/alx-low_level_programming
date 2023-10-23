#include <stdio.h>
#include "main.h"

/**
*print_to_98 - function that prints all natural numbers from n to 98
*@n: integer
*
*/


void print_to_98(int n)
{

	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
		if (n > 98)
		{
			n--;
		}
	}
	printf("\n");
