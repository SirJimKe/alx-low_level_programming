#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * nested loops
 * starts with 0
 * Return: multiples
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			int r = j * i;

			_putchar(',');
			_putchar(' ');
			if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
