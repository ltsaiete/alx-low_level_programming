#include "main.h"

/**
 * print_buffer -  prints a buffer.
 * @b: the buffer
 * @size: size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	/**
	 * Print \n only if <= 0
	 * ciclo para incrementar (i) de 10 em 10
	 * ciclo para incrementar (j) 2 a 2
	 * -> print (b[i + j] e b[i + j + 1])
	 * -> print space
	 * ciclo para incrementar j
	 * -> print (b[i + j])
	 */

	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10; j++)
			{
				if (j + i >= size)
				{
					printf("  ");
				}
				else
				{
					printf("%02x", b[i + j]);
				}
				if (j % 2 != 0)
					putchar(' ');
			}

			for (j = 0; j < 10; j++)
			{
				if (j + i == size)
					break;
				if ((b[i + j] >= '\0' && b[i + j] <= '\7') || b[i + j] == '\n')
				{
					putchar('.');
				}
				else
				{
					printf("%c", b[i + j]);
				}
			}

			putchar('\n');
		}
	}
}
