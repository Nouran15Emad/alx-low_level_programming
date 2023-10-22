#include <stdio.h>
#include "main.h"

/**
*_isalpha - checks if the letter is alphabet or not
*@c : is integer char
*Return: 1 (Sucess) or 0 (fail)
*/

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
