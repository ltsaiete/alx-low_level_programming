#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int i;
	int len;
	int n;

	while (count < argc)
	{
		len = strlen(argv[count]);
		for (i = 0; i < len; i++)
		{
			n = (int)(argv[count][i]) + 0;
			if (!(n >= 48 && n <= 57))
			{
				puts("Error");
				exit(EXIT_FAILURE);
			}
		}

		sum += atoi(argv[count]);

		count++;
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
