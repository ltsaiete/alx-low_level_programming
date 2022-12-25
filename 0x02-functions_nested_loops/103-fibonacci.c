#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	unsigned long n1 = 1, n2 = 1, sum = 0;
	unsigned long next = n1 + n2;

	while (next <= 4000000)
	{
		if (n2 % 2 == 0)
		{
			sum += n2;
		}
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}

	printf("%lu\n", sum);
	return (0);
}
