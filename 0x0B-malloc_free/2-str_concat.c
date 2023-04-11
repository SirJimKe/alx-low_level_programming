#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one input
 * @s2: string two input
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n1, n2;
	char *str;

	n1 = 0;
	n2 = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[n1] != '\0')
		n1++;

	while (s2[n2] != '\0')
		n2++;

	str = (char *)malloc((n1 + n2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		str[i] = s2[j];

	return (str);
}
