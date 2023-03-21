#include "main.h"

/**
 * print_times_table - print the n times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, k; /* i = row, j = column, k = product */

	for (i = 0; i < 10; i++) /* 10 rows */
	{
		for (j = 0; j < 10; j++) /* 10 columns */
		{
			k = i * j; /* product */
			if (k < 10) /* single digit */
			{
				if (j != 0) /* not first column */
				{
					_putchar(' ');
				}
				_putchar(k + '0'); /* print product */
			}
			else if (k < 100) /* double digit */
			{
				_putchar((k / 10) + '0');/* print tens */
				_putchar((k % 10) + '0');/* print ones */
			}
			else /* triple digit */
			{
				_putchar((k / 100) + '0');/* print hundreds */
				_putchar(((k / 10) % 10) + '0');/* print tens */
				_putchar((k % 10) + '0');/* print ones */
			}
			if (j != 9) /*not last column*/
			{
				_putchar(','); /* print comma */
				_putchar(' '); /* print space */
			}
		}
		_putchar('\n');
	}
}
