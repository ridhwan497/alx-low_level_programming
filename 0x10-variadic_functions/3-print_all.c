#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int count;
	char *string, *separator = "";

	/* declare a va_list type variable */
	va_list list;

	va_start(list, format);

	count = 0;
	if (format)
{
	while (format[count])
{
	switch (format[count])
{
	case 'c':
	printf("%s%c", separator, va_arg(list, int));
	break;
	case 'i':
	printf("%s%d", separator, va_arg(list, int));
	break;
	case 'f':
	printf("%s%f", separator, va_arg(list, double));
	break;
	case 's':
	string = va_arg(list, char *);
	if (!string)
	string = "(nil)";
	printf("%s%s", separator, string);
	break;
	default:
	count++;
	continue;
}
	separator = ", ";
	count++;
}
}
	printf("\n");
	va_end(list);
}
