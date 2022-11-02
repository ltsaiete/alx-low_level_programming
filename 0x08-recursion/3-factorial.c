#include "main.h"

/**
 * factorial - prints a string
 * @n: the string to print
 *
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
