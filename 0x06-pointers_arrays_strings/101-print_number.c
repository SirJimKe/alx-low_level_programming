#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer input
 * Return: nothing
 */
void print_number(int n)
{
	int m, num, count = 1;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
		m = n;

	num = m;

	while (num / 10 != 0)
	{
		count *= 10;
		num /= 10;
	}

	while (count != 0)
	{
		_putchar('0' + m / count);
		m %= count;
		count /= 10;
	}
}
