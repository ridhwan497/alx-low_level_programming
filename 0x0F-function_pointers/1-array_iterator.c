#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of int.
 * @size: array size.
 * @action: ptr to é function to be used.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /* size_t is unsigned int */

	if (array != NULL && action != NULL)
	/* if both array and action are not NULL */
		for (i = 0; i < size; i++)
			action(array[i]);

}
