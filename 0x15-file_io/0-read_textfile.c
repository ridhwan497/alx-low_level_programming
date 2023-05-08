#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Declaring Variables*/
	int f_desc;
	ssize_t read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_desc = open(filename, O_RDONLY);

	if (f_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	read_count = read(f_desc, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	close(f_desc);
	free(buffer);

	return (write_count);
}
