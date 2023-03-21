#include "main.h"

/**
 * print_sign - Returns 1 if +ve, 0 if 0 and -1 if -ve
 * @n: int number
 * Return 0;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
