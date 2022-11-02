/**
 * _sqrt - prints a string
 * @n: the string to print
 * @x: auxiliar number
 *
 * Return: void
 */

int _sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}

	if (x * x == n)
	{
		return (x);
	}

	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - prints a string
 * @n: the string to print
 *
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}
