#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array of int.
 * @size: array size.
 * @cmp: ptr to function to be used.
 * Return: index of the first element
 * git for which the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array != NULL && cmp != NULL) /* if both array and cmp are not NULL */
	{
		if (size <= 0)
			return (-1);
		for (count = 0; count < size; count++)
			if (cmp(array[count]) != 0)
				return (count);
	}
	return (-1);
}
