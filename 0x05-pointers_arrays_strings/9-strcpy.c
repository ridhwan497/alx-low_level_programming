#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to a buffer
 * @src: pointer to a string
 * Return: pointer to the resulting string dest
 */
char *_strcpy(char *dest, char *src)
{
	/* declare variables */
	int i = 0;

	/* copy string */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	/* return pointer to resulting string dest */
	return (dest);
}
