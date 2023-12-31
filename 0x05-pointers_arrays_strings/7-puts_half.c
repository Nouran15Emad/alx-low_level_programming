#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*puts_half - prints tha half of a string
*@str: pointer to a string
*
*Return: Nothing
*/

void puts_half(char *str)
{
	int i, j;

	if ((_strlen(str) % 2) == 0)
	{
		i = _strlen(str) / 2;
	}
	else
	{
		i = ((_strlen(str) - 1) / 2) + 1;
	}

	j = i;

	while (j >= i && j < _strlen(str))
	{
		printf("%c", *(str + j));
		j++;

	}

	printf("\n");


}
