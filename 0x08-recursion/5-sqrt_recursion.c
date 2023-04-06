#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
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
