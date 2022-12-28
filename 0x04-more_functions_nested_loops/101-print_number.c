#include <math.h>
#include <stdlib.h>
#include "main.h"
/**
 * _pow - Calculates the power of x raised by y
 * @x: base
 * @y: exponent
 *
 * Return: void
 */

int _pow(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}
/**
 * _log10 - Calculates the logarithm of a number in base 10
 * @n: the number
 *
 * Return: void
 */

int _log10(int n)
{
	return ((n > 9) ? 1 + _log10(n / 10) : 0);
}

/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	int digits, i, div, power;

	if (n == 0)
	{
		_putchar('0' + 0);
	}
	else
	{
		digits = _log10(abs(n));

		if (n < 0)
		{
			_putchar('-');
			n = n * (-1);
		}

		for (i = digits; i >= 0; i--)
		{
			power = _pow(10, i);
			div = abs(n / power);
			n -= power * div;
			_putchar(div + '0');
		}
	}
}
