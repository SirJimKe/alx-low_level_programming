#include "main.h"

/**
 * print_line - draws a straight line
 * @n: parameter
 * Return: a straight line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
