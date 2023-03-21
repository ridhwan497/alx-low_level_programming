#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: integer value to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	return n * ((n > 0) - (n < 0));
}
