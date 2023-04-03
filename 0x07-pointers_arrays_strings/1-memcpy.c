#include "main.h"

/**
 * memcpy - function copies memory area
 * @dest: pointer to memory area copied to
 * @src: pointer to memory area copied from
 *@n: no of int bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
