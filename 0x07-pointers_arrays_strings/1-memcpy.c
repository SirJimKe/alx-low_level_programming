/**
 * _memcpy - copies memory area
 * @dest: pointer to where the block of memory will be copied
 * @src: pointer to where memory location will be copied from
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/**
	 * iterate src
	 * copy what is in src to dest
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
