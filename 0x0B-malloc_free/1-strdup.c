#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: NULL if str = NULL || insufficient memory was available || pointer to
 * the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate; 
	int count, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
		;

	duplicate = malloc((size + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		duplicate[count] = str[count];
	duplicate[count] = '\0';

	return (duplicate);
}
