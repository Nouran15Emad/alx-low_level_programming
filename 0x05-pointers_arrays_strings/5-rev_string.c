#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*rev_string - reverses a string
*@s: pointer to a string
*
*Return: Nothing
*/

void rev_string(char *s)
{
	int i, j;

	j = 0;
	i = (_strlen(s) - 1);
	while (j < i)
	{
		char swap = *(s + j);
		*(s + j) =  *(s + i);
		*(s + i) = swap;
		i--;
		j++;
	}
	printf("\n");

}
