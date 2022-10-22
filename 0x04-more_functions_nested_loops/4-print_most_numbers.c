#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
