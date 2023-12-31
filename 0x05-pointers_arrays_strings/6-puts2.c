#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*puts2 - prints every other character of a string
*@str: pointer to a string
*Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (i % 2 == 0)
		{
			 printf("%c", *(str + i));
		}

		i++;
	}
	printf("\n");
}
