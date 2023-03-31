#include "main.h"

/**
 * cap_string - capitallzies all words of a string
 * @s: string input
 * Return: capitalized s
 */
char *cap_string(char *s)
{
	int i = 0;

	/**
	 * iterate through the string
	 * find small letters
	 * if first letter is small capitalize
	 * find separators of words
	 * if a letter following a separator is lower, capitalize
	 */
	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (i == 0)
				s[i] -= 32;

			if (s[i - 1] == 32 || s[i - 1] == 9 ||
			    s[i - 1] == 10 || s[i - 1] == 44 ||
			    s[i - 1] == 59 || s[i - 1] == 33 ||
			    s[i - 1] == 63 || s[i - 1] == 34 ||
			    s[i - 1] == 40 || s[i - 1] == 41 ||
			    s[i - 1] == 123 || s[i - 1] == 125 ||
				s[i - i] == 46)
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
