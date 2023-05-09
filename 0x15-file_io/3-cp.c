#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdarg.h>

#define BUFSIZE 1024

/**
 * error_exit - prints an error message and exits with the specified code
 * @code: exit code
 * @msg: error message
 */
void error_exit(int code, const char *msg, ...)
{
	va_list args;

	va_start(args, msg);
	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, msg, args);
	va_end(args);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, nread, nwrite;
	char buf[BUFSIZE];
	struct stat st;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	if (fstat(fd_from, &st) == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, st.st_mode & 0666);
	if (fd_to == -1)
		error_exit(99, "Can't write to %s\n", argv[2]);

	while ((nread = read(fd_from, buf, BUFSIZE)) > 0)
	{
		nwrite = write(fd_to, buf, nread);
		if (nwrite == -1 || nwrite != nread)
			error_exit(99, "Can't write to %s\n", argv[2]);
	}

	if (nread == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd %d\n", fd_to);

	return (0);
}
