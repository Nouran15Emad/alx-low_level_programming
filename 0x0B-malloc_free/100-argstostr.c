#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i, j, k;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	/*Calculate total length of all arguments*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++; /*Account for '\n'*/
	}
	/*Allocate memory for the concatenated string*/
	concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated_str == NULL)
	{
		return (NULL);
	}
	/*Concatenate arguments into the string*/
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated_str[k++] = av[i][j];
		}
		concatenated_str[k++] = '\n'; /*Add '\n' after each argument*/
	}
	concatenated_str[k] = '\0'; /*Null-terminate the string*/

	return (concatenated_str);
}
