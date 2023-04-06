#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to string to be measured
 * Return: string length
 */
 
int _strlen_recursion(char *s)
{
	int size;

	size = 0;
	
	if (*s != '\0')
	{
		size = _strlen_recursion(s + 1);
		size++;
	}

	return (size);
}
