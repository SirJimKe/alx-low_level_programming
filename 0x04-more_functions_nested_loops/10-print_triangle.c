#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
 * Return: a triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');

		for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
