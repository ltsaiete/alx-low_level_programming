#include "main.h"

/**
 * print_numbers - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
