#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*Description - Program prints the alphabet in lowercase and uppercase
*Return: 0 
*/
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a' ; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A' ; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	printf("\n");
	return (0);
}
