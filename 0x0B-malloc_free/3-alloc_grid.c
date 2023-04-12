#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
		free(arr);
		return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
