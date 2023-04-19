#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int bytes, count;

	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	arr = (char *)main;

	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", arr[count]);
		if (count < bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
