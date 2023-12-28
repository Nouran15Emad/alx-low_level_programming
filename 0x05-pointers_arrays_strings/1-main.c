#include <stdio.h>
#include "main.h"

/**
*main - check a 2 int swapping func 
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	int a, b;

	a = 98;
	b = 100;

	printf("Before Swapping\n");
	printf("a = %d ,b = %d\n",a ,b);

	swap_int(&a ,&b);

	printf("After Swapping\n");
	printf("a = %d ,b = %d\n",a ,b);
	return (0);
}
