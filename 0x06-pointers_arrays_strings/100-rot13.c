#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded s
 */
char *rot13(char *s)
{
	int i = 0, c;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (c = 0; c < 52; c++)
		{
			if (s[i] == alphabet[c])
			{
				s[i] = rot13[c];
				break;
			}
		}
		i++;
	}
	return (s);
}
