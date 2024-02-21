#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that take char
 * @s: pointer to char value
 * @accept: pointer to char value
 * Return: unsigned int
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int accept_length = 0;

	while (accept[accept_length] != '\0')
	{
		accept_length++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < accept_length; j++)
		{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
		}
		if (j == accept_length)
		{
			break;
		}
	}

	return (count);
}
