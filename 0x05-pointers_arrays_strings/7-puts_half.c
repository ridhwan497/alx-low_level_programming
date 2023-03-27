#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++) /* find length of string */
	{
	}
	if (i % 2 == 0) /* if even */
	{
		for (j = i / 2; j < i; j++) /* print second half */
		{
			_putchar(str[j]);
		}
	}
	else /* if odd */
	{
		for (j = (i + 1) / 2; j < i; j++) /* print second half */
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
