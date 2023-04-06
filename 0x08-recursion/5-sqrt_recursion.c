#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: 1 if n has a natural square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = 1;

	if (n == sqrt * sqrt)
	{
		return (sqrt);
	}
	else if (sqrt < n)
	{
		return (_sqrt_recursion(n));
	}
	else
	{
		return (-1);
	}
	
}
