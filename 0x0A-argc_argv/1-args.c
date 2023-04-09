#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1); /* no of arguments that is not argv[0]*/
	return (0);
}
