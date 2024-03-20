#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars, and initializes it with a specific char
*@size: integer the size of the array
*@c: char
*Return: pointer to the array (Sucess) Null (Fails) or the size is 0
*/

char *create_array(unsigned int size, char c)
{
	 unsigned int i;
	 char *arr;
	

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}

	arr =(char *) malloc(sizeof(char) *size );


	if (arr == NULL)
	{
		return (NULL);
	}


	while (i < size)
		{
			arr[i] = c;
			i++;
		}
	
	
	
	return (arr);
	
	
}
