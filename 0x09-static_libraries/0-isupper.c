#include <stdio.h>
#include "main.h"

/**
*_isupper - checks if the char is uppercase
*@c: inreger
*Return:  1 if the char is uppercase (Sucess)
*0 otherwise
*/

int _isupper(int c)
{
	while (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
