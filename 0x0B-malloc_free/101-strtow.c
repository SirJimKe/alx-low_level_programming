#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits string into words
 * @str: pointer to input string
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, height = 0, len = 0, c = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		height++;
		while (str[i] != ' ' && str[i] != '\0')
		       i++;
	}
	words = (char **)malloc((height + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		len = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			len++;
			i++;
		}

		words[c] = (char *)malloc((len + 1) * sizeof(char));
		if (words[c] == NULL)
		{
			for (j = 0; j < c; j++)
				free(words[c]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
		{
			words[c][j] = str[i - len + j];
		}
		words[c][len] = '\0';
		c++;
	}
	words[c] = NULL;
	return (words);
}
