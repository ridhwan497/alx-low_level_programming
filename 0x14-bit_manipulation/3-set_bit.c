#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to be modified
 * @index: index starting from 0 of the bit to set
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_value;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit_value = 1UL << index; /*here we shift the bits to the left*/

	*n = *n | bit_value;

	return (1);
}
