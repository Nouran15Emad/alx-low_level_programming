#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
*_strcpy - copies the string pointed to by src to the buffer pointed to by dest
*@dest: pointer to string >> the destination
*@src: pointer to string >> the source
*
*Return: the pointer to destination string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
