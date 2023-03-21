#include "main.h"

/**
*_islower - Return 1 if letter is lowercase, 0if not
*@c: char letter
*Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
