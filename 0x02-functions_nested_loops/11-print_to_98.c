#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: int number
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
	_putchar(98);
}
