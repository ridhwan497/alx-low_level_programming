#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if it fails || pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int count, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
		;
	for (size2 = 0; s2[size2]; size2++)
		;

	concat = malloc((size1 + size2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (count = 0; count < size1; count++)
		concat[count] = s1[count];
	for (count = 0; count < size2; count++)
		concat[size1 + count] = s2[count];
	concat[size1 + count] = '\0';

	return (concat);
}
