#include <stdio.h>
#include "main.h"

/**
*leet - encodes a string into 1337
*@text : pointer to a string
*Return: encoded string
*/

char *leet(char *text)
{
	char leet_chars[] = "aAeEoOtTlL";
	char leet_code[] = "4433007711";

	int i, j;

	for ( i = 0; i != '\0'; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			if (text[i] == leet_chars[j])
			{
				text[i] = leet_code[j];
				break;
			}
			
		}
		
	}
	

	return (text);
}
