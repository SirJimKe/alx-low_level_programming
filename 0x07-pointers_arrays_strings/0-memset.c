/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: value to be set as char
 * @n: number of bytes to be set
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
