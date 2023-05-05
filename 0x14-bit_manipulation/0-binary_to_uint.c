#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count, num;

	count = num = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		num <<= 1; /*here we shift the bits to the left*/
		if (b[count] == '1')
			num += 1;
		count++;
	}

	return (num);
}
