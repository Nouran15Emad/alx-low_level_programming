#include <stdio.h>
#include "main.h"

/**
*_print_rev_recursion - Print a string in reverse using recursion
*@s:pointer to string
*Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*check the end of string & Base Case*/
	{
		return;
	}
	_print_rev_recursion(s + 1);/*Recursive procedure*/
	printf("%c", *s);/*print the chars from the end*/


}
