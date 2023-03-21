#include "main.h"

/**
 *print_pchar - prints _putchar
 *Description: prints _putchar
 *Return: 0
 */
int print_pchar(void)
{
	char myChar[] = "_putchar";
	int i;

	while (myChar[i] != '\0')
	{
		_putchar(myChar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

