#include <stdio.h>

/**
 * main - Prints Alphabet in lowerCase except q and e
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a2z;

	a2z = 'a';

	while (a2z <= 'z')
	{
		if (a2z != 'e' && a2z != 'q')
		{
			putchar(a2z);
		}
		a2z++;
	}
	putchar('\n');
	return (0);
}
