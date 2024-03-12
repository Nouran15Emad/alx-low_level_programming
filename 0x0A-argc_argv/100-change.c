#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins (change)
*@argc: integer == the count of program arguments
*@argv: array of pointers to strings (the program arguments)
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, count;
	int cents, num_coins;
	int coins[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}



	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	count = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < count ; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
