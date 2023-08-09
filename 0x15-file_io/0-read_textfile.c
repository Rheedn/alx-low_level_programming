#include "main.h"

/**
 * read_textfile - Reads text file and prints to standard output.
 * @filename: Name of file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read;
	int file_descriptor;
	char *buffer;

	n_read = 0;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	n_read = read(file_descriptor, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	if (n_read != write(STDOUT_FILENO, buffer, n_read))
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (n_read);
}
