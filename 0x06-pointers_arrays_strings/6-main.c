#include <stdio.h>
#include "main.h"

/**
*main - check the code
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n"
				  "hello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	printf("%s", str);
	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
