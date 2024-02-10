#include <stdio.h>
#include "main.h"


/**
*is_prime_helper - check the prime integer
*@n: integer >>the check target
*@divisor: checker if the integer have divisor
*Return: integer
*/

int is_prime_helper(int n, int divisor)
{
	/*Base cases*/
	if (n <= 1)
	{
		return (0);  /*Not a prime number*/
	}
	else if (n == 2)
	{
		return (1);  /* 2 is a prime number*/
	}
	else if (n % divisor == 0)
	{
		return (0);  /*Divisible by a number other than 1 and itself, not prime*/
	}
	else if (divisor * divisor > n)
	{
		return (1);  /* No divisor found, prime number*/
	}

	/*Recursive case*/
	return (is_prime_helper(n, divisor + 1));
}


/**
*is_prime_number - call the helper function
*@n: integer
*Return: the result of the helper func integer
*/

int is_prime_number(int n)
{
	/*Call the helper function with the initial divisor value of 2*/
	return (is_prime_helper(n, 2));
}
