#include <stdio.h>
#include "main.h"
/**
*main - checks the code
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char *str, *s;

	str = "0123456789";
	s = "abcde";

	puts_half(str);
	puts_half(s);

	return (0);
}
