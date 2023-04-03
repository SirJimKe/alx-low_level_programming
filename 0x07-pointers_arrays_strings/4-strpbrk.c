/**
 * _strpbrk - searches for any set of bytes in a string
 * @s: pointer to the string to be serched
 * @accept: pointer to a string that contains the set of characters
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	/**
	 * iterate through s and accept using nested while loops
	 * find is characters in s exist in accept
	 * if *s exists in accept return s and exit
	 * else return null
	 */
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
