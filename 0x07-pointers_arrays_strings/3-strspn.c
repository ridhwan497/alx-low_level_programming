#include "main.h"
#include <stdio.h>
/**
 * 	_strspn - function that gets the length of a prefix substring.
 * @s: initial string segment
 * @accept:bytes to be checked aganist
 * Return: number of bytes in s that consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; i++)
		{
			if (s[i] == accept[k])
			{
				break; /*break from the inner loop*/
			}
		}
		if (accept[k] == '\0')
		{
			return (i); /*return the length i if it has reached the end of string*/
		}
	}
	
	return (i);
}

