#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:  a pointer to the first string to be compared
 * @s2:  a pointer to the second string to be compared
 * Return: 0 0r 1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (s1[i] != '\0' && s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
		i++;
	}

	return (result);
}
