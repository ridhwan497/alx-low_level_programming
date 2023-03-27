#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string
 * Return: Always 0
 */
void print_rev(char *s)
{
	/* find length of string */
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	/* print string in reverse */
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
