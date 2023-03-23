#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: parameter
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
