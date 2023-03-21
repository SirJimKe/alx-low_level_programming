#include "main.h"

/**
 * main - prints -putchar
 *
 * Return: 0 success
 */
int main(void)
{
	char arr[10] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(arr[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
