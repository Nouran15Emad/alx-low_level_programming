#include <stdio.h>
#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@str: pointer to a string
*Return: the resulted Capitalized string
*/

char *cap_string(char *str)
{
	/*My code with some edits*/
	int i, j;

	char separators[] = {' ', '\n', ',', ';', '.', '!', '?',
						'\"', '(', ')', '{', '}', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				i++;/*skip the seperator char*/

				if (str[i] >= 'a' && str[i] <= 'z')/*check if the next element is letter*/
				{
					str[i] -= 32; /*convert to uppercase*/
				}
			}
		}
		if (i == 0 || str[i] == '\n')/*Special case when first letter in first word*/
		{
			if (str[i] >= 'a' && str[i] <= 'z')/*check if the  element is letter*/
			{
				str[i] -= 32; /*convert to uppercase*/
			}
		}
	}

	return (str);
}
