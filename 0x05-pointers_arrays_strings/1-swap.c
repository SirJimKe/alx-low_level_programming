#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer paramenter
 * @b: pointer parameter second
 * Return: swapping
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
