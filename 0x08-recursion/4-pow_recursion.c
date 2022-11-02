/**
 * _pow_recursion - prints a string
 * @x: the string to print
 * @y: the string to print
 *
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
