#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_value;
	unsigned int count = 0;

	bit_value = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (bit_value > 0)
	{
		if ((n & bit_value) != (m & bit_value))
			count++;
		bit_value >>= 1; /*here we shift the bits to the right*/
	}

	return (count);
}
