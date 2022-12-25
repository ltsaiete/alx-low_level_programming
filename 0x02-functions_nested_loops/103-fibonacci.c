#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	int n1 = 1, n2 = 1, sum = 0;
	int next = n1 + n2;

	while (next <= 4000000)
	{
		if (n2 % 2 != 0)
		{
			sum += n2;
		}
		next = n1 + n2;
		n1 = n2;
		n2 = abs(next);
	}

	printf("%d\n", sum);
	return (0);
}
