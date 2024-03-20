#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates 2 strings & malloc
*@s1: string to be concat
*@s2: string to be concat
*Return: pointer to the res (Sucess) Null (fail)
*/

char *str_concat(char *s1, char *s2)
{
	char *res;
	int length1, length2, i, j;

	/*Treat NULL pointers as empty strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*claculate length1 and length2*/
	length1 = 0;
	length2 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	/*malloc to res string*/
	res = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)/*add s1 to res*/
	{
		res[i] = s1[i];
	}
	for (j = 0; j < length2; j++)/*add s2 to res after s1*/
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';
	return (res);
}
