#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
*_strcmp - copmares two strings
*@s1: pointer to a string
*@s2: pointer to a string
*
*Return: less than 0 or 0 (matched) or greater than 0
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/**
	   for ( i = 0; s1[i] != '\0' && s2[i] != '\0';)
	   {
	  if (_strlen(s1) > _strlen(s2))
	  {
	  	i++;
	  }
	  else if (_strlen(s1) < _strlen(s2))
	  {
	  	i--;
	  }
	  else
	  {
	  	i = 0;
	  }
	  }
	*/

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
