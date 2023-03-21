#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @r: integer value to be returned
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int m;
	if (r < 0) /*if r is -ve*/
	{
		m = -1 * (r % 10); /*-1(-35%10)=5*/
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = r % 10;
		_putchar(m + '0');
		return (m);
	}
}
