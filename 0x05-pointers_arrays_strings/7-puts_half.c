#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: paramenter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len] != '\0')
		len++;

	n = len / 2;

	if (len % 2 == 1)
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
