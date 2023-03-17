#include<stdio.h>
#include<stdlib.h>

/**
*main - main function
*Description: program prints numbers of base 16 in lowercase with putchar
*Return: 0
*/

int main(void)
{
	int num; /*this is the numbers 0-9*/
	char c; /*this is for the letters a-f*/

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
