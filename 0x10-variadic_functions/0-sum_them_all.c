#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	/* declare a va_list type variable */
	va_list ap;
	unsigned int count;
	int sum = 0;

	if (n == 0)
		return (0);
	/* initialize ap for n number of arguments */
	va_start(ap, n);
	/* access all the arguments assigned to ap */
	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
