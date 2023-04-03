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

	while (haystack[i] = '\0')
	{
		k = 0;
		while (haystack [i + y] != 0 && needle[k + y] != '\0' && haystack[i + y] == needle[k + y])
		{
			if (haystack[i + y] != needle [k + y])
			{
				break;
			}
			y++;
		}
		if (needle [k + y] == '\0')
		{
			return (&haystack[i]);
		}
		k++;
		i++;
	}
	
	return (0);
}
