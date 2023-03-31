#include "main.h"

/**
 * cap_string - capitallzies all words of a string
 * @s: string input
 * Return: capitalized s
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(',
		       ')', '{', '}' };

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	while (s[i] != '\0')
	{
		if (s[i] == '\t')
			s[i] = ' ';

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
