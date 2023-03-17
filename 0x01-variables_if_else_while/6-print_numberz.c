#include <stdio.h>
#include <stdlib.h>

/*
*main - main function
*Description:program prints all single digit numbers of base 10 starting from 0, followed by a new line.
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