#include "main.h"
char *_buffer(char *f_from);
void _close(int f_from);
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f_from, f_to;
	char *buffer;
	int _read, _write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	_read = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		_write = write(f_to, buffer, _read);
		if (f_to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		_read = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);

	free(buffer);
	_close(f_from);
	_close(f_to);

	return (0);
}

/**
 *_close - close file
 *@f_from: file from
 */

void _close(int f_from)
{
	int close_from;

	close_from = close(f_from);

	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
}

/**
 * _buffer - buffer
 * @f_from: file from
 * Return: buffer
 */

char *_buffer(char *f_from)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_from);
		exit(99);
	}

	return (buffer);
}
