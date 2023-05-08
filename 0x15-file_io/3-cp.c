#include "main.h"

int handle_error(int, char *, int);

/**
 * main - this function copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 * or exit with code 97, 98, 99, 100 on failure
 */

int main(int argc, char *argv[])
{
	int f_desc_from, f_desc_to, read_count, write_count;
	char *buffer;

	if (argc != 3)
		return (handle_error(97, NULL, 0));
	f_desc_from = open(argv[1], O_RDONLY);
	if (f_desc_from == -1)
		return (handle_error(98, argv[1], 0));
	f_desc_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_desc_to == -1)
		return (handle_error(99, argv[2], f_desc_from));
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (handle_error(100, NULL, f_desc_from));
	read_count = read(f_desc_from, buffer, 1024);
	if (read_count == -1)
		return (handle_error(98, argv[1], f_desc_from));
	write_count = write(f_desc_to, buffer, read_count);
	if (write_count == -1)
		return (handle_error(99, argv[2], f_desc_from));
	free(buffer);
	if (close(f_desc_from) == -1)
		return (handle_error(100, NULL, f_desc_from));
	if (close(f_desc_to) == -1)
		return (handle_error(100, NULL, f_desc_to));

	return (0);
}

/**
 * handle_error - this function handles errors
 * @error_code: error code
 * @file: file name
 * @f_desc: file descriptor
 * Return: exit with code error_code
 */

int handle_error(int error_code, char *file, int f_desc)
{
	if (error_code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (error_code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	else if (error_code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	else if (error_code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_desc);
	exit(error_code);

	return (0);
}
