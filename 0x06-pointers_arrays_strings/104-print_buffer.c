#include "main.h"

/**
 * __putchar -  prints a char
 * @c: the char
 *
 * Return: void
 */
void __putchar(char c)
{
	if ((c >= '\0' && c <= '\7') || c == '\n' || c == '\t')
	{
		putchar('.');
	}
	else
	{
		putchar(c);
	}
}

/**
 * print_buffer -  prints a buffer.
 * @b: the buffer
 * @size: size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
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
				__putchar(b[i + j]);
			}
			putchar('\n');
		}
	}
}
