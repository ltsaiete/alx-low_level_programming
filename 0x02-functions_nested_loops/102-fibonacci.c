#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	int n1 = 1, n2 = 1, next, i;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", n2);
		next = n1 + n2;
		n1 = n2;
		n2 = abs(next);
	}

	putchar('\n');
	return (0);
}
