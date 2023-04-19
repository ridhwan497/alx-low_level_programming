#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: operator passed as argument to the program.
 * Return: ptr to é func that corresponds 2 e operator given as a parameter.
 * If s does not match
 * any of the 5 expected operators (+, -, *, /, %),
 * return NULL.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}; /* array of structs */
	int count;

	count = 0;
	while (count < 5)
	{
		if (strcmp(s, ops[count].op) == 0)
			return (ops[count].f);
		count++;
	}
	return (NULL);
}
