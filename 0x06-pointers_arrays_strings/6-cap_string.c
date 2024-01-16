#include <stdio.h>
#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@str: pointer to a string
*Return: the resulted Capitalized string
*/

char *cap_string(char *str)
{
	char separators[] = {' ', '\n', ',', ';', '.', '!',
	 '?', '\"', '(', ')', '{', '}', '\t'};

	 int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		int is_separator = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{   /*Manual separator check*/
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator)
		{
			continue;/*Skip separators*/
		}

		if (i == 0 || is_separator)
		{
			/*Capitalize at start or after separators*/

			if (str[i] >= 'a' && str[i] <= 'z')
			{
				/*Check for lowercase letter*/

				str[i] -= 32;
			}
		}
	}

	return (str);
}
