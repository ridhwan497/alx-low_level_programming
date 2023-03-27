#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: pointer to a string
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) /* find length of string */
	{
		if (i % 2 == 0) /* print every other character */
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
