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
	
	for(number = 0; number < 10; number++)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
