#include <stdio.h>
/**
*main - print the prgram name
*@argc: integer == the count of program arguments
*@argv: array of pointers to strings (the program arguments)
*Return: Always 0 (Success)
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
