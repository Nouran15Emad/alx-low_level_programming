#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Write a function that copies memory area
 * @dest: a pointer to char value
 * @src: a pointer to char value
 * @n: unsigned integer
 * Return: dest a pointer to char value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	for (; n > 0; --n)
	{
		*d++ = *s++;
	}

	return (dest);
}
