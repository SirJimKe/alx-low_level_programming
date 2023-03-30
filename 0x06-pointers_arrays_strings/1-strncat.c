#include "main.h"

/**
 * _strncat - concates two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i, c;

	ptr = dest;
	i = 0;
	c = 0;

	while (dest[c] != '\0')
		c++;

	while (*src != '\0' && i < n)
	{
		ptr[c + i] = src[i];
		i++;
	}

	return (dest);
}
