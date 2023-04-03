#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: char to be located
 * Return: pointer to first occurence of char c or NULL if not
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		
		s++;
	}
	
	return (s + 1);
}
