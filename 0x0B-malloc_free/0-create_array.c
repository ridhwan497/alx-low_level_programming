#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char.
 * @size: sizeof array
 * @c: initializing char
 *
 * Return: NULL if it fails || size = 0 || pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
		return (NULL);
	else
	{
		array = malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);
		for (count = 0; count < size; count++)
			array[count] = c;
		return (array);
	}
}
