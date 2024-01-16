#include <stdio.h>
#include "main.h"

/**
*string_toupper - changes the lowercase to upper
*@str: a pointer to a string
*Return: upperCase string
*/

char *string_toupper(char *str)
{
	int i = 0;

while (str[i] != '\0')
{
	if (*(str + i) >= 'a' && *(str + i) <= 'z')
	{
		*(str + i) = *(str + i) - 32;
	}
	i++;
}

	return (str);
}
