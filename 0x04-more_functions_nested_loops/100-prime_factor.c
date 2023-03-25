#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0 success
 */
int main(void)
{
	long int i, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
		}
	}

	printf("%ld\n", i - 1);

	return (0);
}
