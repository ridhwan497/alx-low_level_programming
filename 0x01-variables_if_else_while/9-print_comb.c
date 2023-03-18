#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*Description: program prints all possible combinations of single-digit numbers
*Return: 0
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number < 9)
		{
			putchar(number + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(number + '0');
		}
	}
	putchar('\n');
	return (0);	
}
