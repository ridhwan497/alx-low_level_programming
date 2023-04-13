#include "main.h"
#include <stdlib.h>

/**
 * ch_free - free 2d grid previously created by
 * alloc_grid function.
 * @p: grid to free
 * @n: h of the grid
 */
void ch_free(char **p, unsigned int n)
{
	if (p == NULL || n == 0)
		return;
	for (; n > 0; n--)
		free(p[n]);
	free(p[n]);
	free(p);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int count, h, size, size2, arr1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (count  = h = 0; str[count] != '\0'; count++)
		if (str[count] != ' ' && (str[count + 1] == ' ' || str[count + 1] == '\0'))
			h++;
	aout = malloc((h + 1) * sizeof(char *));
	if (aout == NULL || h == 0)
	{
		free(aout);
		return (NULL);
	}
	for (size = arr1 = 0; size < h; size++)
	{
		for (count  = arr1; str[count] != '\0'; count++)
		{
			if (str[count] == ' ')
				arr1++;
			if (str[count] != ' ' && (str[count + 1] == ' ' || str[count + 1] == '\0'))
			{
				aout[size] = malloc((count - arr1 + 2) * sizeof(char));
				if (aout[size] == NULL)
				{
					ch_free(aout, size);
					return (NULL);
				}
				break;
			}
		}
		for (size2 = 0; arr1 <= count ; arr1++, size2++)
			aout[size][size2] = str[arr1];
		aout[size][size2] = '\0';
	}
	aout[size] = NULL;
	return (aout);
}
