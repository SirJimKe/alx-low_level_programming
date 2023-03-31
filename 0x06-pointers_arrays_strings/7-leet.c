#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: stirng input
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, c;
	int lower[] = {'a', 'e', 'o', 't', 'l'};
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (c = 0; c < 5; c++)
		{
			if (s[i] == lower[c] || s[i] == upper[c])
			{
				s[i] = num[c];
				break;
			}
		}
		i++;
	}
	return (s);
}
