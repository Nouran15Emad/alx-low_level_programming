#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to char value
 * @c: char variable
 * Return: pointer s to char value (Success)
 * NULL (Fail)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
