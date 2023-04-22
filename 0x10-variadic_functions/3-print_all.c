#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	/* declare a va_list type variable */
	va_list ap;
	unsigned int count, flag; /* flag is used to check if a separator is needed */
	char *str;

	/* initialize ap for n number of arguments */
	va_start(ap, format);

	/* access all the arguments assigned to ap */
	count = 0;
	flag = 0;

	while (format != NULL && format[count] != '\0')
	{
		/* check for the type of argument */
		if(count > 0)
			printf(", ");

		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), flag = 1;
				break;
			case 'i':
				if (flag == 1)
				printf("%d", va_arg(ap, int)), flag = 1;
				break;
			case 'f':
				if (flag == 1)
				printf("%f", va_arg(ap, double));
				flag = 1;
				break;
			case 's':
				if (flag == 1)
				str = va_arg(ap, char *);

				if (str == NULL)
				{
					str = "(nil)";
					break;
				}
				printf("%s", str);
				flag = 1;
				break;
		} count++;
	}
	printf("\n"), va_end(ap);
}
