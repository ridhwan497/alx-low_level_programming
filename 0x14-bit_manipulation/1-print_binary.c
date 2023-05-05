#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_value;
	unsigned int flag = 0;

	/*here we shift the bits to the left*/
	bit_value = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_value > 0)
	{
		if ((n & bit_value) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		bit_value >>= 1; /*here we shift the bits to the right*/
	}
}
