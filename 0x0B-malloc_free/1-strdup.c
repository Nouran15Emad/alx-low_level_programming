#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*_strdup -  returns a pointer to a newly allocated space in memory(Copy)
*@str: string that will be duplicated
*Return: pointer to the copy char * (Sucess) Null (fail)
*/

char *_strdup(char *str)
{
	int i;
	int length;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	/*find the str length*/

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	/*create the copy and put in malloc*/

	copy = (char *)malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}



	return (copy);
}
