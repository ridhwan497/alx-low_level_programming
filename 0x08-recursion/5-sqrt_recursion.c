#include "main.h"

/**
 * square_root - returns the natural square root of a number
 * @n: integer number
 * @counter: integer number
 * Return: natural square root of n
 */

int square_root(int n, int counter);
{
	if (n == counter * counter)
	{
		return (counter);
	}
	else if (n < counter * counter)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, counter + 1));
	}

}

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
