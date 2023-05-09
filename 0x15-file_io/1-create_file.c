#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write on the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int result;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);

	chmod(filename, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		result = fputs(text_content, file);
		if (result == EOF)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}
