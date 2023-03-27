#include "main.h"

/**
 * swap_int - swaps the value of 2 integers.
 * @a: pointer to int
 * @b: pointer to int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;
}
