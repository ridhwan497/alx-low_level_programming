#include "main.h"

int handle_error(int f_from, int f_to, char *argv[]);
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f_from, f_to;
	ssize_t read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	f_from = open(argv[1], O_RDONLY);
	handle_error(f_from, f_to, argv);

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	
	read_count = read(f_from, buffer, 1024);
	if (read_count == -1)
		handle_error(0, -1, argv);
	write_count = write(f_to, buffer, read_count);
	if (write_count == -1)
		handle_error(0, -1, argv);
	
	free(buffer);

	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}

/**
 * handle_error - handles errors
 * @f_from: file from
 * @f_to: file to
 * @argv: argument vector
 * Return: 0
 */

int handle_error(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
