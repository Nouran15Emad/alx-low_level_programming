#include <stdio.h>
#include "main.h"

/**
*main - check the code
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst.";
	char *ptr;

	/*printf("%s", str);print the original string*/
	ptr = cap_string(str);/*cap is hapenning*/
	printf("%s\n", ptr);/*print the ptr */
	/*printf("%s", str);print the capitalized string*/

	return (0);
}
