/**
 * _pow_recursion - returns x to the power of y
 * @x: first integer x
 * @y: integer y
 * Returm: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
