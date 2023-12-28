#include <stdio.h>
#include "main.h"

/**
*main - check the reverse printing func 
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
