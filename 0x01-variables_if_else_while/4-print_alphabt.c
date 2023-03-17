#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * does not print q and e
 * uses only putchar
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
