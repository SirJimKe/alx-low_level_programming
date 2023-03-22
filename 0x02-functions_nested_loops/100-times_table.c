#include <stdio.h>
#include "main.h"

/**
 * print_times_table - peints the n times table
 * @n: parameter
 * Return: multiplication table
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				int r = i * j;

				if (r < 10)
					printf(",   %d", r);
				else if (r > 9 && r < 100)
					printf(",  %d", r);
				else
					printf(", %d", r);
			}
			printf("\n");
		}
	}
}
