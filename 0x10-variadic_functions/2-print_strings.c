#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings and a separator
 * @separator: separates strings
 * @n: number of strings args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			printf("nil");
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
