
/**
 * _sqrt_helper - recursive helper function for calculating sqrt
 * @n: number input
 * @i: current guess for sqrt
 * Return: sqrt
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns sqrt of a number
 * @n: number input
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}
