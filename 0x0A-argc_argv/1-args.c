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

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
