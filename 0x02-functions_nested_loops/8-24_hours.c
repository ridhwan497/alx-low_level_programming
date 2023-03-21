#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int h, m; /* hour, minute */

	for (h = 0; h < 24; h++) /* 24 hours a day */
	{
		for (m = 0; m < 60; m++) /* 60 minutes an hour */
		{
			_putchar((h / 10) + '0');/* print hour */
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');/* print minute */
			_putchar((m % 10) + '0');/* print minute */
			_putchar('\n');
		}
	}
}
