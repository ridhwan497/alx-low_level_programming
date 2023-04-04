#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: pointer to memory area copied to
 * @src: pointer to memory area copied from
 * @n: no of int bytes
 * Return: pointer to char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
