#include <stdio.h>
#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Lower index of the search range
 * @high: Higher index of the search range
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
		       array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
	       bound > size - 1 ? size - 1 : bound);

	return (_binary_search(array, bound / 2, bound > size - 1 ?
			      size - 1 : bound, value));
}
