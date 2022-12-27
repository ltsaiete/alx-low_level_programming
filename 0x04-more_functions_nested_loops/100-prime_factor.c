#include <stdio.h>

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
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest = factor;
	int result = 0;
	printf("%lu\n", number);

	while (number > 1)
	{
		factor = 2;
		result = 0;

		while (!result)
		{
			if (_is_prime(factor, 2))
			{

				if (number % factor == 0)
				{
					number = number / factor;
					result = 1;
					if (factor > largest)
					{
						largest = factor;
					}
				}
			}
			factor++;
		}
	}

	printf("%lu\n", largest);

	return (0);
}
