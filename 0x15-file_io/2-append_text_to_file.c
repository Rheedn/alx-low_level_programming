#include "main.h"

/**
 * append_text_to_file - Appends text to end of file.
 * @filename: Name of file to append to.
 * @text_content: NULL terminated string to add to end of file.
 *
 * Return: 1 on success, and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written == -1 || bytes_written != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
