#include <stdio.h>

/**
 * main - Prints Alphabet in LowerCase and Reversed
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char z2a;

	z2a = 'z';
	while (z2a >= 'a')
	{
		putchar(z2a);
		z2a--;
	}

	putchar('\n');
	return (0);
}


