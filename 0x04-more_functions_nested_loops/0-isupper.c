#include "main.h"

/*
*_isupper - checks for uppercase character
*@c - character to be checked
*Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c>= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
int main(void)
{
    char c;

    c = 'A';
    _putchar(c);
    c = 'a';
    _putchar(c);
    return (0);
}