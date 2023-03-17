#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*Description - program prints prints alphabets in lowercase except q and e
*Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	printf("\n");
	return (0);
}
