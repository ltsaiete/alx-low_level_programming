#include "main.h"
#include <string.h>

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
 * infinite_add -  adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r:  is the buffer size
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int pos1 = strlen(n1), pos2 = strlen(n2), number1, number2, sum, rest = 0;

	r[--size_r] = '\0';
	while (pos1 >= 0 || pos2 >= 0)
	{
		size_r--;
		pos1--;
		pos2--;
		number2 = '0';
		number1 = '0';
		rest = 0;

		if (size_r < 0)
			return (0);

		if (pos1 >= 0)
			number1 = n1[pos1];

		if (pos2 >= 0)
			number2 = n2[pos2];

		number1 = ascii_to_int(number1);
		number2 = ascii_to_int(number2);
		sum = number1 + number2 + rest;
		if (sum > 9)
		{
			sum -= 10;
			rest = 1;
		}
		r[size_r] = sum + '0';
	}

	if (rest == 1)
	{
		size_r--;
		if (size_r < 0)
			return (0);
		r[size_r] = 1 + '0';
	}
	return (r + size_r);
}
