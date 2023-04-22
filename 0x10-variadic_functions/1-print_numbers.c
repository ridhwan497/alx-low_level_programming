#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare a va_list type variable */
	va_list ap;
	unsigned int count;

	/* initialize ap for n number of arguments */
	va_start(ap, n);

	/* access all the arguments assigned to ap */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(ap, int));
		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	/* clean memory reserved for ap */
	va_end(ap);
}
