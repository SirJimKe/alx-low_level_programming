#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string input
 * @s2: pointer to string two input
 * @n: bytes of s2 to be concatenated
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		k++;

	for (j = 0; s2[j] != '\0'; j++)
		l++;

	if (n >= l)
		n = l;
	str = malloc(sizeof(char) * (k + n + 1));

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[k + j] = s2[j];
	str[k + n] = '\0';

	return (str);
}
