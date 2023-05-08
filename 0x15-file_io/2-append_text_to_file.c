#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success
 * or return -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc, write_count, i;

	if (filename == NULL)
		return (-1);

	f_desc = open(filename, O_WRONLY | O_APPEND);

	if (f_desc == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(f_desc);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	write_count = write(f_desc, text_content, i);

	if (write_count == -1)
		return (-1);

	close(f_desc);

	return (1);
}
