#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	unsigned long n1 = 1, n2 = 1, next;
	int i;

	for (i = 0; i < 97; i++)
	{
		printf("%lu, ", n2);
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("%lu\n", n2);

	return (0);
}
