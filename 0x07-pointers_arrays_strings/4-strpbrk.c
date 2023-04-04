#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: string 's'
 * @accept: pointer to string 'accept'
 * Return: pointer to byte in 's' correlating to é bytes in accept 
 * or NULL if none found.
 */
char *_strpbrk(char *s, char *accept)
{
	int cs, ca; /*counter for s and accept */
	char *ps; /*pointer for string s*/

	cs= 0;
	while (s[cs] != '\0')
	{
		ca = 0;
		while (accept[ca] != '\0')
		{
			if (accept[ca] == s[cs])
			{
				ps = &s[cs];
				return (ps);
			}
			ca++;
		}
		cs++;
	}

	return 0;
}
