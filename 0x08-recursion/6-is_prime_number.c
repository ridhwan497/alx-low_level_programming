#include "main.h"

/**
 * primey - checks if a number is prime
 * @num: integer number
 * @check: integer number
 * Return: 1 if prime, otherwise 0
 */

int primey(int num, int check)
{
	if (num == check)
	{
		return (1);
	}
	else if (num % check == 0)
	{
		return (0);
	}
	else
	{
		return (primey(num, check + 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer number
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	return (primey(n, 2));
}
