#include <stdio.h>
#include "main.h"

/**
*_isdigit - check if the input is a digit
*@c: theinput integer
*Return: 1 if it is a digit (Sucess)
*0 otherwise
*/

int _isdigit(int c)
{

	while (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
