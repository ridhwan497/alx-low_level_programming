#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	/* Variable declaration*/
	int i = 0;
	int j = 0;

	while (s[i] != 0)
	{
		i++;
	}

	for ( j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
