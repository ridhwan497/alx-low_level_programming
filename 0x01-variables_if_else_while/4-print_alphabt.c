#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*description - program prints prints alphabets in lowercase except q and e
*return: 0
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
