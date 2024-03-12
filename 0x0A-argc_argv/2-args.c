#include <stdio.h>

/**
*main - prints all arguments
*@argc: integer == the count of program arguments
*@argv: array of pointers to strings (the program arguments)
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

	}
	else
	{
		printf("%s\n", argv[0]);
	}


	return (0);
}
