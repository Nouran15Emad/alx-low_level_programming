#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if fails
 */

char **strtow(char *str)
{
	int words_count, i, j, k, length;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words_count = count_words(str);
	if (words_count == 0)
	{
		return (NULL);
	}
	words = (char **)malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < words_count; i++)
	{
		while (str[j] == ' ')
		{
			j++;
		}
		length = word_length(str + j);
		words[i] = (char *)malloc((length + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL); }
		for (k = 0; k < length; k++)
		{
			words[i][k] = str[j++];
		}
		words[i][k] = '\0';
	} words[i] = NULL;
	return (words);
}
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int count, i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}
/**
 * word_length - Calculates the length of a word in a string
 * @str: The string containing the word
 *
 * Return: Length of the word
 */
int word_length(char *str)
{
	int length = 0;

	while (str[length] != ' ' && str[length] != '\0')
	{
		length++;
	}

	return (length);
}
