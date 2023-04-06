/**
 * wildcmp - compares two strings
 * @s1: pointer to string one
 * @s2: pointter to string to be compared
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	/**
	 * first check if both strings are empty
	 * check if s1 = s2
	 * check if s1 = *
	 */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 != '\0')
		return (*s2 == '*' && wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
