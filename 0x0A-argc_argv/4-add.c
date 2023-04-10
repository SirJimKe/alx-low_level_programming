#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		while (*num)
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);

	return (0);
}
