#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to string s
 * @accept: pointer to string accept
 */
char *_strpbrk(char *s, char *accept)
{
	int count_s;
	int count_accept;

	count_s = 0;
	count_accept = 0;

	while (s[count_s] != '\0')
	{
		while (accept[count_accept] != '\0')
		{
			if (s[count_s] == accept[count_accept])
			{
				return (count_s);
			}
			count_accept++;
		}
		count_s++;
	}

	return 0;
}
