/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: contains the set of characters to search for
 * Return: number of bytes of characters in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	/**
	 * iterate both strings in nested for loops
	 * check if a character in accept is in s are in accept
	 * if a character exists increase the counter
	 * if accept = '\0'return number of bytes and exit
	 */
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
