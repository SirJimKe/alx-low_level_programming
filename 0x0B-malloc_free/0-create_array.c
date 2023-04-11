#include <stdlib.h>

/**
 * create_array - creates and array of chars
 * @size: number of array elements
 * @c: char to initialize the array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
