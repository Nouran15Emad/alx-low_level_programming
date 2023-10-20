#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	i = 0;
	j = i + 1;

	while (i < 9)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
			j++;
		}
	}

	putchar('\n');
	return (0);
}
