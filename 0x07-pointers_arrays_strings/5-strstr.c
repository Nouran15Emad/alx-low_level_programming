#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: poniter to char value
 * @needle: pointer to char value
 * Return: pointer to char value
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
