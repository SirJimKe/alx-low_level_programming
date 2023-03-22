#include <stdio.h>

/**
 * main - prints multiples of 3 or 5
 * all are natural numbers
 * Return: multiples of 3 or 5 below 1024
 */
int main(void)
{
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d\n", i);
	}
	return (0);
}
