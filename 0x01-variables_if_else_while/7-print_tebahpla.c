#include <stdio.h>
#include <stdlib.h>

/**
*main -main function
*Description: program prints the alphabets in reverse with just putchar
*Return: 0
*/
int main(void)
{
	char reverse; /*this variable is for reversing alphabets*/

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
