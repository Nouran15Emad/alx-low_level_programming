#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	/**
	 * the part of the code that is causing the output to go into an infinite loop >> no increment
	 */
	while (i < 10)
	{
		putchar(i);
		break;
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
