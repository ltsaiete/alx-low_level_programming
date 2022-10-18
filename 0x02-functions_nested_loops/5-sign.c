#include "main.h"

/**
 * print_sign- Entry point
 * @n: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	} else if (n == 0)
	{
		_putchar('0');
		r = 0;
	} else
	{
		_putchar('-');
		r = -1;
	}

	return (r);
}
