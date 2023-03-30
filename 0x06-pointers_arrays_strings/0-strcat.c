#include "main.h"

/**
 * _strcat - concanates two strings
 * @dest: string one
 * @src: string two
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
