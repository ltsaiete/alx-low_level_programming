#include <stdlib.h>
#include <limits.h>
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
	int digits, i, div, power, number = n;

	if (n == INT_MIN)
		number++;

	if (n == 0)
	{
		_putchar('0' + 0);
	}
	else
	{
		number = abs(number);
		digits = _log10(number);

		if (n < 0)
		{
			_putchar('-');
		}

		for (i = digits; i >= 0; i--)
		{
			if (n == INT_MIN && i == 0)
				number++;
			power = _pow(10, i);
			div = abs(number / power);
			number -= power * div;
			_putchar(div + '0');
		}
	}
}
