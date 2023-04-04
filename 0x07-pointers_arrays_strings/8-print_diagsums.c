#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of square matrix of int.
 * @a: pointer 2 1st element of matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int total1 = 0;
	int total2 = 0;

	while (i < size)
	{
		total1 += a[i];
		a = a + size;
		i++;
	}
	a = a - size;
	i = 0;
	while (i < size)
	{
		total2 += a[i];
		a = a - size;
		i++;
	}
	printf("%d, %d", total1, total2);
	printf("\n");
}
