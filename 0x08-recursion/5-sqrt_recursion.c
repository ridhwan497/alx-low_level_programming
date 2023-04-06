#include "main.h"

/**
 * sqrt_func - returns the natural square root of a number
 * @input: integer number
 * @check: integer number
 * Return: square root of input or -1 if input isnt a square root
 */

int sqrt_func(int input, int check)
{
	if (check * check == input)
	{
		return (check);
	}
	else if (check * check > input)
	{
		return (-1);
	}
	else
	{
		return (sqrt_func(input, check + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: square root of n or -1 if n isnt a square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0 || n == 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt_func(n, 1));
	}
}
