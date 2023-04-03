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
	char *ptr_s;

	count_s = 0;

	while (s[count_s] != '\0')
	{
		count_accept = 0;
		while (accept[count_accept] != '\0')
		{
			if (accept[count_accept] == s[count_s])
			{
				ptr_s = &s[count_s];
				return (ptr_s);
			}
			count_accept++;
		}
		count_s++;
	}

	return (0);
}
