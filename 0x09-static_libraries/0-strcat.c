#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*_strcat - concatenates two strings
*@dest: pointer to a string (destination)
*@src: pointer to a string (Source)
*Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, dest_len, src_len;

	dest_len = _strlen(dest);
	src_len = _strlen(src);

	for (i = 0; i < src_len; i++)
	{
		dest[i + dest_len] = src[i];
	}

	dest[dest_len + src_len] = '\0';

	return (dest);
}
