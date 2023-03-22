#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starts with 1 and 2
 * Return: 0 success
 */
int main(void)
{
	int i;
	long arr[50];

	arr[0] = 1;
	arr[1] = 2;

	printf("%ld, %ld", arr[0], arr[1]);
	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
		printf(", %ld", arr[i]);
	}

	printf("\n");
	return (0);
}
