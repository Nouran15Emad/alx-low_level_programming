#include <stdio.h>

/**
*main - print the count of program arguments
*@argc: integer == the count of program arguments
*@argv: array of pointers to strings (the program arguments)
*Return: Always 0 (Success)
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
		printf("%d\n", (argc - 1));
	return (0);
}
