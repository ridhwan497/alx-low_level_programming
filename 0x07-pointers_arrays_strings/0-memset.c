#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with byte b
 * @s: pointer to char
 * @b: char to be filled
 * @n: the first n bytes
 * Return: pointer s
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
