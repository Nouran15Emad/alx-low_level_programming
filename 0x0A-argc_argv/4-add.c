#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - a program that adds positive numbers
*@argc: integer == the count of program arguments
*@argv: array of pointers to strings (the program arguments)
*Return:  0 (Success) 1 (failure)
*/
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);

		}

		printf("%d\n", sum);

	return (0);
}
