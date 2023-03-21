#include "main.h"

/**
 *main - prints _putchar
 *Description: prints _putchar
 *Return: 0
 */
int main(void)
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

