#include "main.h"

/**
 * print_sign - prints the sign of a number
 * if less than zero print -1, if zero print 0, if more than zero print 1
 * @n: paramenter
 * Return: 1 if +, 0 if 0, -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
