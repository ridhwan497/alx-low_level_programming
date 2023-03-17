#include <stdio.h>

/*
*main - main function
*Description - Program prints the alphabet in lowercase
*Return: 0
*/
int main(void)
{
	char lowercase_characters;
	for (lowercase_characters = 'a' ;lowercase_characters <= 'z'; lowercase_characters ++)
	{
		putchar(lowercase_characters);
    }
	printf("\n");
	return (0);
}