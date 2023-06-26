#include "main.h"

/**
 * *_strcpy - function that copies string
 * @dest: destination array
 * @src: source array
 * Return: return copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
