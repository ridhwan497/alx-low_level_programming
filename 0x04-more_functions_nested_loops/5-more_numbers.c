#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: void
 */
void more_numberes(void)
{
	int nums; /* 0 - 14 */
	
	for (int i = 0; i < 10; i++)
	{
		for (nums = 0; nums <=14; nums++)
		{
			_putchar(nums + '0');
		}
		_putchar('\n');
	}
}
