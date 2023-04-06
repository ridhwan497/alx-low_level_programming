#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	int sqr;

	sqr = 1; /* 1 is the first non neg sqrt*/

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

	return (sqr * sqr);
}