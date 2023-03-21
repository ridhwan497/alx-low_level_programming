#include "main.h"

/**
 *int _islower(int c) - checks for lowercase character
 *Description: checks for lowercase character is there
 *Return: 1 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
