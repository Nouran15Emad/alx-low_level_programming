#include <stdio.h>
#include "main.h"

/**
*main - Check tha func len
*
*Return: Always 0 (Sucess)
*/

int main(void)
{

	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
