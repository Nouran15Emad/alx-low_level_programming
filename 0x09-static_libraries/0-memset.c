#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: a pointer
 * @c: an integer
 * @n: size_t n
 * Return: a pointer s
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;
	unsigned char value = c;

	for (; n > 0; --n)
	{
		*p++ = value;
	}

	return (s);
}
