/**
 * _is_prime - prints a string
 * @n: the string to print
 * @x: the string to print
 *
 * Return: void
 */

int _is_prime(int n, int x)
{
	if (n % x == 0 && n != x)
	{
		return (0);
	}

	if (x == n)
	{
		return (1);
	}

	return (_is_prime(n, x + 1));
}

/**
 * is_prime_number - prints a string
 * @n: the string to print
 *
 * Return: void
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (_is_prime(n, 2));
}
