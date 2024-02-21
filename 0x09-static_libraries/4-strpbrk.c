#include <stdio.h>
#include "main.h"

/**
 * strpbrk - unction that searches a string for any of a set of bytes
 * @s: pointer to char value
 * @accept: pointer to char value
 * Return: pointer to char value (sucess)
 * NULL (fail)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
