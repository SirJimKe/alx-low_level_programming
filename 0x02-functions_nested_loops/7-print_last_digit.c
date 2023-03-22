#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: paramenter
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
		r = -r;

	_putchar(r + '0');


	return (r);
}
