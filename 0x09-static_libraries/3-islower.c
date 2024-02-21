#include <stdio.h>
#include "main.h"

/**
*_islower - checks if the letter is lower or not
*@c : is integer char
*Return: Always 0 (Sucess)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
