#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: paramenter
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return (-n % 10);
}
