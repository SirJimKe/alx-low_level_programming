#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	free(buffer);
	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
