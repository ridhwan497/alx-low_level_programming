#include "main.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: pointer to the string haystack
 * @needle: pointer to substring needle
 * Return: pointer of located string or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int k;
	int y;

	i = 0;
	y = 0;

	while (haystack[i] != '\0')
	{
		k = i;
		while (haystack[k] == needle[y])
		{
			k++;
			y++;
			if (needle[y] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (0);
}
