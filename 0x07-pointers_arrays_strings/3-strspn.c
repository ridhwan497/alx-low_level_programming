#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial string segment
 * @accept: char to be matched
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int y;

	i = 0;
	y = 0;

	while (s[i] != '\0')
	{
		k = 0;

		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				y++;
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
		{
			break;
		}
		i++;
	}
	
	return (y);
}
