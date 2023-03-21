#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: int number
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98) /* if n is less than 98 */
	{
		for (; n < 98; n++) 
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
