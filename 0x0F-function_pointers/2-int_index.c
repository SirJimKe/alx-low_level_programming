#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
