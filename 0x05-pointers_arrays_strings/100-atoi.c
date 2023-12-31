#include <stdio.h>
#include "main.h"
#include"limits.h"

/**
*_atoi - convert a string to integer
*@s: pointer to a string
*Return: the result integer
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			if (*s == '-')
			{
				sign *= -1;
			}
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return (sign == 1) ? INT_MAX : INT_MIN;
			}
			result = result * 10 + digit;
		}
		else if (*s == '+')
		{
		}
		s++;

	}



	return result * sign;
}
