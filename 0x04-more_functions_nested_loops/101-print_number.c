#include <math.h>
#include <stdlib.h>
#include "main.h"

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
		digits = log10(abs(n));
		if (n < 0)
		{
			_putchar('-');
			n = n * (-1);
		}

		for (i = digits; i >= 0; i--)
		{
			power = pow(10, i);
			div = abs(n / power);
			n -= power * div;
			_putchar(div + '0');
		}
	}
}
