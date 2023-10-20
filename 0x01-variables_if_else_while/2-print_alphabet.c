#include <stdio.h>

/*
 * main - Print Alphabet
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a2z;

	a2z = 'a';
	while (a2z <= 'z')
	{
		putchar(a2z);
		a2z++;
	}
	putchar('\n');
	return (0);
}
