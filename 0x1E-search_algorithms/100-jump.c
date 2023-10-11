#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (prev + step < size && array[prev + step] < value)
	{
		prev += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev,
	       prev + step);
	while (prev < size && array[prev] < value)
	{
		if (prev < size)
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (prev < size && array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	else
		return (-1);
}
