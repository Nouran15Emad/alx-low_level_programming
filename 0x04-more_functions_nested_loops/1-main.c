#include <stdio.h>
#include "main.h"

/**
*main - Calls a checker func 
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char c;
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
