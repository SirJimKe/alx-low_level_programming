#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to 2D array input
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	/**
	 * print rows and colums of 2D array
	 * using a nested for loop
	 * after 8 elements, go to a new lines
	 * 8 rows, 8 columns
	 */
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
