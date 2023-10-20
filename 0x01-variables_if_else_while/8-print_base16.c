#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	i = 0;
	while (i < 6)
	{
		putchar(i + 'a');
		i++;
	}
	putchar('\n');
	return (0);
}
