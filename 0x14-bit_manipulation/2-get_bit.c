#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index starting from 0 of the bit to get
 * Return: the value of the bit at index 'index'
 * || -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_value;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit_value = 1UL << index; /*here we shift the bits to the left*/

	if ((n & bit_value) == 0)
		return (0);
	else
		return (1);
}
