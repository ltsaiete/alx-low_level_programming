#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len, c = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b) - 1;

	while (c <= len)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		if (b[c] == '1')
		{
			dec += power(2, len - c);
		}

		c++;
	}

	return (dec);
}

/**
 * power - calculates the value of x raised to the power of y.
 * @x: base
 * @y: power
 *
 * Return: the value of x raised to the power of y.
 */

int power(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * power(x, y - 1));
}
