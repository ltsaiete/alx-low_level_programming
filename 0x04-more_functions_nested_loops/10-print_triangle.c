#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Argument for the function
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i = 1, j;

	if (size > 0)
	{

		while (i <= size)
		{
			j = size;
			while (j > 0)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}

				j--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
