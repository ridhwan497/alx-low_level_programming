#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string haystack
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
		k = 0;

		while (needle[k + y] != '\0' && haystack[i + k] != '\0' && needle[k + y] == haystack[i + k])
		{
			if (haystack[i + k] != needle[k + y])
			{
				break;
			}
			k++;
		}
		if (needle[k + y] == '\0')
		{
			return (haystack + i);
		}
		k++;
		i++;
		
	}
	return (0);
}
