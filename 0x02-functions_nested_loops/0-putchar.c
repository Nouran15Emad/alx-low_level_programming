#include <stdio.h>
#include "main.h"

/**
*main - Print _putchar
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char *p = "_putchar";
	int i = 0;

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
