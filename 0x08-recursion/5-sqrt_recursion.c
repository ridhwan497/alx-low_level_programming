#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: 1 if n has a natural square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	int counter;

	counter = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (counter * counter);
}
