#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer number
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int counter;

	counter = 2; /* 2 is the first non negative prime int*/

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

	return (counter * counter);
}
