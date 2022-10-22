#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Argument for the function
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
