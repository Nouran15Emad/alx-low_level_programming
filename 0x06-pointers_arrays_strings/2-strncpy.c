#include <stdio.h>
#include "main.h"

/**
*_strncpy - copies a string at most n bytes of src are copied
*@dest: pointer to destination string
*@src: pointer to source string
*@n: the number of bytes of src that should be copied to dest
*
*Return: the result destination srting (pointer)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
