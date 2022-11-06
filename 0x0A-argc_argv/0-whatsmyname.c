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

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
