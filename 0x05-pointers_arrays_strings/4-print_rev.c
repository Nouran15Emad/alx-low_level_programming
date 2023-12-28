#include <stdio.h>
#include "main.h"

/**
*print_rev - print a string in reverse followed by a new line 
*@s: pointer to a string
*
*Return: Always 0 (Sucess)
*/

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while ( i >= 0)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf("\n");

}
