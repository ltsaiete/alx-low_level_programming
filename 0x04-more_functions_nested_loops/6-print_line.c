#include "main.h"

/**
 * print_line - Entry point
 * @n: Argument for the function
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			_putchar('_');
			c++;
		}
	}
	_putchar('\n');
}
