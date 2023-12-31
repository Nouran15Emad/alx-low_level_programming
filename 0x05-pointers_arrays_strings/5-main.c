#include <stdio.h>
#include "main.h"

/**
*main - check a func that reverses a string
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char string[10] = "My School";

	printf("%s\n", string);

	rev_string(string);

	printf("%s\n", string);
	return (0);
}
