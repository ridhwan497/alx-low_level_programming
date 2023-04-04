#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to string s
 * @accept: pointer to string accept
 */
char *_strpbrk(char *s, char *accept)
{
	int cs; /*counter for s*/
	int ca; /*counter for accept*/
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
