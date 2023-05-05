#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: integer value
 * @m: integer value
 * Return: the number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x != 0)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
