#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, s;
	int temp;

	/**
	 * initialize int i and int *r to n
	 * iterate array a from element a[n-1];
	 * decrement i, increment s
	 * temporarily store a[s]
	 * overwrite a[s] with a[i]
	 * overwrite a[i] with temp
	 */
	for (s = 0, i = n - 1; s < i; s++, i--)
	{
		temp = a[s];
		a[s] = a[i];
		a[i] = temp;
	}
}
