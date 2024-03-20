#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*main - check the code for ALX School students
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}
