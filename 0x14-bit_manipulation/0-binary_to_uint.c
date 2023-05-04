#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; ++b)
	{
		if (*b == '0' || *b == '1')
			result = (result << 1) + (*b - '0');
		else
			return (0);
	}
	return (result);
}
