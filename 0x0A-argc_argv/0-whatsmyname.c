#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[]) /*argc is unused to prevent warnings*/
{
	printf("%s\n", argv[0]);
	return (0);
}