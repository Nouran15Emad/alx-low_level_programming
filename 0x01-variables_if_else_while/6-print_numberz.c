#include <stdio.h>

/**
 * main - Prints l single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
