/**
 * _strlen - returns length of a string
 * @s: pointer to string input
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - recursion function helper
 * @s: string input
 * @i: start index character
 * @j: end index character
 * Return: 1 or 0;
 */
int is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);

	return (is_palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string input
 * Return: 1 if is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int num = _strlen(s);

	return (is_palindrome_helper(s, 0, num - 1));
}
