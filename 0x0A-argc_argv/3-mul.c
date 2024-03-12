#include <stdio.h>
#include <stdlib.h>

/**
*main - a program that multiplies two numbers
*@argc: integer == the count of program arguments
*@argv: array of pointers to strings (the program arguments)
*Return: 0 (Success) 1 (Failure)
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}


	return (0);
}
