#include "main.h"

/**
 *_islower - function to print lower case alphabets
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is a lowe case
 * and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
