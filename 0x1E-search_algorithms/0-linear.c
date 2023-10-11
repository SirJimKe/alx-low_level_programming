#include <stdio.h>

/**
 * linear_search - searches for a value usinge linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: Index of the value of -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
