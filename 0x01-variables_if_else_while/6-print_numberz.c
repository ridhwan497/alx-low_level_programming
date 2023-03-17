#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*Description - Program prints numbers from  0 to 10 followed by a new line.
*Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
