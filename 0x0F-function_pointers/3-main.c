#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 if successful
 *  98 if incorrect number of arguments
 *  99 if operator is not +, -, *, /, or %
 * 100 if division or modulo by 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op; /*Operator*/
	int (*f)(int, int); /*Pointer to function*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = argv[2][0];

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(num1, num2);

	printf("%d\n", result);

	return (0);
}
