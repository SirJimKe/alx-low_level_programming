#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
