#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest value
 * @max: largest value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, j, n, *arr;

	if (min > max)
		return (NULL);

	j = 0;
	n = max - min + 1;
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max && j < n; i++, j++)
		arr[j] = i;
	return (arr);
}
