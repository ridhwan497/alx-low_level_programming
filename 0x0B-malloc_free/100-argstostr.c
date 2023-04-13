#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: num of args
 * @av: array of args
 * Return: NULL if ac = 0 || av = NULL || ptr to a new string
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int count, count2, size, size2;

	if (ac == 0)
		return (NULL);

	for (count = count2 = 0; count2 < ac; count2++)
	{
		if (av[count2] == NULL)
			return (NULL);

		for (size = 0; av[count2][size] != '\0'; size++)
			count++;
		count++;
	}

	aout = malloc((count + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (count2 = size = size2 = 0; size2 < count; size++, size2++)
	{
		if (av[count2][size] == '\0')
		{
			aout[size2] = '\n';
			count2++;
			size2++;
			size = 0;
		}
		if (size2 < count - 1)
			aout[size2] = av[count2][size];
	}
	aout[size2] = '\0';

	return (aout);
}
