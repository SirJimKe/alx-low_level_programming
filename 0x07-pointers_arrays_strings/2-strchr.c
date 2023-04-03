/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: character to be located
 * Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	/**
	 * iterate s to find if c exists
	 * if c exists return the pointer of c
	 */
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	/**
	 * if c is '\0'
	 * return the pointer to s
	 */
	if (*s == c)
		return (s);

	return (0);
}
