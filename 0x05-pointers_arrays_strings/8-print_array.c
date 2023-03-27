#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	/* declare a counter variable */
	int i;

	/* loop through the array */
	for (i = 0; i < n; i++)
	{
		/* print the current element */
		printf("%d", a[i]);
		/* if the current element is not the last element */
		if (i != n - 1)
		{
			/* print a comma and a space */
			printf(", ");
		}
	}
	/* print a new line */
	printf("\n");
}
