#include <stdio.h>

/**
 * main - prints fibonnaci sum
 * Return: 0 success
 */
int main(void)
{
	int i;
	long arr[50], sum = 2;

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 50; i++)
	{
		if (arr[i] < 4000000)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
			sum += arr[i];
		}
	}

	printf("%ld\n", sum);
	return (0);
}
