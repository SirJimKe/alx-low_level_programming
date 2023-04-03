/**
 * _strstr - locates a substring
 * @haystack: pointer to the string being searched
 * @needle: pointer to the substring to search for
 * Return: pointer for the beginning of the located substring
 * or NULL if otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	/**
	 * find if a needle is empty, if empty return haystack
	 * iterate haystack and needle
	 * find if each characters of needle exists in haystack
	 * if exists, return pointer to haystac char begining the
	 * need, else return Null
	 */
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *begin = haystack;
		char *str = haystack;
		char *sub = needle;

		while (*sub != '\0' && *str == *sub)
		{
			str++;
			sub++;
		}
		if (*sub == '\0')
			return (begin);

		haystack++;
	}
	return (0);
}
