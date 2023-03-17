#include <stdio.h>

/**
*main - main function
*Description - Program prints the alphabet in lowercase
*Return: 0
*/
int main(void)
{
	char c;
    
	for (c = 'a' ; c <= 'z'; c ++)
	{
		putchar(c);
    }
	printf("\n");
	return (0);
}