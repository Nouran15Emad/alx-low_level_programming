#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 6


/**
*main - check the code
*
*Return: Always 0 (Sucess)
*/


/**
*generate_password - generate random password
*
*Return: Always 0 (Sucess)
*/

char *generate_password(void)
{
	int i;

	char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

	if (password == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int charset_length = strlen(charset);

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_index = rand() % charset_length;

		password[i] = charset[random_index];
	}
	password[PASSWORD_LENGTH] = '\0';
	return (password);
}

int main(void)
{
	char *password = generate_password();

	printf("Generated password: %s\n", password);
	free(password);



	return (0);
}
