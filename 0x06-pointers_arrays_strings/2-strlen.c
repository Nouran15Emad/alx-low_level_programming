#include <stdio.h>
#include "main.h"

/**
*_strlen -a function that returns the length of a string
*@s: a pointer to string
*Return: integer value >> the length of string
*/

int _strlen(char *s)
{
	int ln;

	ln = 0;
	while (*s != '\0')
	{
		ln++;
		s++;
	}

	return (ln);
}
