#include "main.h"

/**
*_isalpha - return 1 if c is a letter, 0 if not
* @c: char letter
*Return: 1 if letter, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
