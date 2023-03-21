#include "main.h"
#include <stdio.h>

/**
 *print_alphabet - prints the alphabet in lowercase
 *Description: prints the alphabet in lowercase
 *Return: 0
 */
void print_alphabet()
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
/**
*main - main function
*Description: prints the alphabet in lowercase
*Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
