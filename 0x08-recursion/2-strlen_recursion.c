#include <stdio.h>
#include "main.h"

/**
*_strlen_recursion - Return the length of a string
*@s: a pointer to a string
*Return: integer value >> the length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}
