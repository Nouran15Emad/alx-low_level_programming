#include <stdio.h>
#include "main.h"

/**
*main - calling absolute function
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	int a, b, c, d;

	a = _abs(18);
	b = _abs(0);
	c = _abs(-1);
	d = _abs(-16);

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}
