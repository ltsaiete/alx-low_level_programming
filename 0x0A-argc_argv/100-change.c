#include <stdio.h>
#include <stdlib.h>

/**
 * _min - Entry point
 *
 * @a: Args count
 * @b: Args vector
 *
 * Return: success
 */

int _min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * changes - Entry point
 *
 * @coins: Args count
 * @n: Args vector
 *
 * Return: success
 */

int changes(int coins[], int n)
{
	int i, minimum;

	if (n == 0)
		return (0);
	for (i = 0; i < 5; i++)
	{
		if (n - coins[i] >= 0)
		{
			minimum = _min(coins[i], n);
			return (1 + changes(coins, n - minimum));
		}
	}

	return (0);
}

/**
 * main - Entry point
 *
 * @argc: Args count
 * @argv: Args vector
 *
 * Return: success
 */

int main(int argc, char **argv)
{
	int number, ch;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		puts("0");
		exit(EXIT_FAILURE);
	}

	ch = changes(coins, number);
	printf("%d\n", ch);

	exit(EXIT_SUCCESS);
}
