#include <stdio.h>
#include "main.h"

/**
*_atoi - convert a string to integer
*@s: pointer to a string
*Return: the result integer
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '+' || *s == '-')
		{
			if (*s == '-')
			{
				sign = sign * -1;
			}
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		s++;

	}


	return result * sign;
}
