#include "main.h"

/**
 * times_table - prints the 9 times table
 * starts with 0
 * Return: multiples
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r = j * i;

			if (j < 9)
			{
				if (r < 10)
					_putchar(r + '0');
				else
				{
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (r < 10)
					_putchar(r + '0');
				else
				{
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				_putchar('$');
			}
		}

		_putchar('\n');

	}
}
