#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments count
 * @av: arguments vector
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	count += 1;

	arr = (char *)malloc(count * sizeof(char));

	if (arr == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[count] = av[i][j];
			count++;
		}
		arr[count] = '\n';
		count++;
	}
	return (arr);
}
