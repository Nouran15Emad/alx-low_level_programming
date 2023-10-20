#include <stdio.h>

/**
 * main - Prints Alphabet in Lower and Uppercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a2z;
	char A2Z;

	a2z = 'a';
	A2Z = 'A';

	while (a2z <= 'z')
	{
		putchar(a2z);
		a2z++;
	}

	while (A2Z <= 'Z')
	{
		putchar(A2Z);
		A2Z++;
	}

	putchar('\n');
	return (0);
}
