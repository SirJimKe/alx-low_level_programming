#include <stdlib.h>

/**
 * array_iterator - executes a function given a a parameter
 * @array: pointer to input array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size < 1 || action == NULL)
		return;

	for (; size > 0; size--, array++)
		action(*array);
}
