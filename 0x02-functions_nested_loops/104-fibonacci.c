#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	long double n1 = 1, n2 = 1, next;
	long long n = 218922995834555169026;
	int i;

	for (i = 0; i < 97; i++)
	{
		printf("%.0Lf, ", n2);
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("%.0Lf\n", n2);

	return (0);
}
