#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: is a parameter
 * Return: return 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
