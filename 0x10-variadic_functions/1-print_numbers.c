#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a separator
 * @separator: string to be between numbers
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
