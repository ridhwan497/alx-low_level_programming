#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0; /* length of string */
	int j = 0; /* index of first character */
	char temp; /* temporary variable */

	while (s[i] != '\0') /* find length of string */
	{
		i++;
	}
	i--;
	while (i > j) /* swap characters */
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
