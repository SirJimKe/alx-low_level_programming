#include <stdio.h>
/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to find
 *
 * Return: -1 or index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, j;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (j = left; j <= right; ++j)
		{
			printf("%d", array[j]);
			if (j < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
