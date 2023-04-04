#include <stdio.h>

/**
 * print_diagsums - prints sums of two diagonals
 * @a: pointer to 2D matrix
 * @size: number of rows and columns
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	/**
	 * iterate the array using for loop
	 * find sum of the first diagonal
	 * find sum of the second diagonal
	 * print each sum;
	 */
	int i, sum1 = 0, sum2 = 0, n = size * size;

	for (i = 0; i < n; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < n - 1; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
