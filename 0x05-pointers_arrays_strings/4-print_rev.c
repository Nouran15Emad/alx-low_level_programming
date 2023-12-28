#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*print_rev - print a string in reverse followed by a new line
*@s: pointer to a string
*
*Return: Always 0 (Sucess)
*/

void print_rev(char *s)
{
	int i;

	i = (_strlen(s) - 1);

	while (i >= 0)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf("\n");

}
