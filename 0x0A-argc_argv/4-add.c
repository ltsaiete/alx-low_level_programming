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
	int sum = 0;
	int count = 1;

	while (count < argc)
	{
		if (atoi(argv[count]))
		{
			sum += atoi(argv[count]);
		}
		else
		{
			puts("Error");
			exit(EXIT_FAILURE);
		}
		count++;
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
