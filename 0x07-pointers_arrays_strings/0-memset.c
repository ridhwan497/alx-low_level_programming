#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to char
 * @b: char to be filled
 * @n: the first n bytes
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
