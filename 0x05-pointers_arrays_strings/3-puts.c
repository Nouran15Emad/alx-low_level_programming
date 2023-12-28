#include <stdio.h>
#include "main.h"

/**
*_puts - print a string folllowed by new line
*@str: pointer to a string
*
*Return: Always 0 (Sucess)
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
