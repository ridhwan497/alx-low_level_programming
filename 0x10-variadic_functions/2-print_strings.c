#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare a va_list type variable */
	va_list ap;
	unsigned int count;
	char *str;

	/* initialize ap for n number of arguments */
	va_start(ap, n);

	/* access all the arguments assigned to ap */
	for (count = 0; count < n; count++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	/* clean memory reserved for ap */
	va_end(ap);
}
