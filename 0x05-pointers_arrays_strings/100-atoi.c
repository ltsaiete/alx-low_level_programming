#include "main.h"
#include <stdio.h>

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
 * ascii_to_int - convert an ascii representation of a number
 * to the number itself
 * @ascii: The ascii representation
 *
 * Return: The integer
 */

int ascii_to_int(int ascii)
{
	return (ascii - 48);
}

/**
 * _atoi - _atoi
 * @s: The string representation of the number
 *
 * Return: The number
 */

int _atoi(char *s)
{
	int ascii, numberLength = 0, signal = 1;
	float number = 0;
	char previous = '\0';

	while (*s != 0)
	{

		ascii = *s;
		if (previous == '\0' || previous == *(s - 1))
		{

			if (ascii >= 48 && ascii <= 57)
			{
				previous = *s;
				number += (float)ascii_to_int(ascii) / _pow(10, numberLength);
				numberLength++;
			}
			if (*s == '-')
				signal *= -1;
		}
		s++;
	}
	number *= _pow(10, --numberLength);
	number *= signal;
	return (number);
}
