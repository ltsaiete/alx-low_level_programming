#include <stdio.h>
#include <stdlib.h>

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
	int mult;

	if (argc < 2)
	{
		puts("Error");
		exit(EXIT_FAILURE);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);

	exit(EXIT_SUCCESS);
}
