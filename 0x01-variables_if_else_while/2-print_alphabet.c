#include <stdio.h>

/**
 * main - Print Alphabets char
 *
 * Return: Always 0 (Sucess)
 * Description: This function prints alphabets
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
