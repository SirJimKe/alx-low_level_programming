#include <stdio.h>

/**
 * main - prints all single digit number of base 10
 * only use putchar
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	putchar('\n');

	return (0);
}
