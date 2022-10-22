#include "main.h"

/**
 * print_square - Entry point
 * @size: Argument for the function
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
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
