/**
 * is_prime_helper - recursive helper function
 * @n: number input
 * @i: number tested as a divisor
 * Return: 1 0r 0
 */
int is_prime_helper(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if number is prime
 * @n: number input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
