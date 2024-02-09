#include <stdio.h>
#include "main.h"

/**
*_puts_recursion - prints a string, followed by a new line
*@s: pointer to a string
*Return: Nothing
*/

void _puts_recursion(char *s)
{
	/*Base Case*/
	if (*s == '\0')/*check the end of the string*/
	{
		printf("\n");/*print new line at the end of string*/
		return;
	}

	printf("%c", *s);/*print the chars*/
	_puts_recursion(s + 1);/*Recursive procedure*/
	
	
	
}
