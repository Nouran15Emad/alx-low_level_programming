#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*_strncat - Concatenates two strings with n bytes
*@dest: pointer to destination string
*@src: pointer to source string
*@n: number of bytes of source
*Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + dest_len] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
