#include <stdio.h>
#include "main.h"

/**
*main - check the code
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char lower[] = "mohammed el-nemr\n";
	char *ptr;

	printf("%s", lower);
	ptr = string_toupper(lower);
	printf("%s", lower);
	printf("%s", ptr);
	return (0);
}
