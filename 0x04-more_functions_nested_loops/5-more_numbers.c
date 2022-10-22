#include "main.h"

/**
 * more_numbers - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n = 0;
	int n1, n2;

	while (n <= 14)
	{
		n1 = n / 10;
		n2 = n % 10;

		if (n > 9)
			_putchar(n1 + '0');
		_putchar(n2 + '0');
		n++;
	}
	_putchar('\n');
}
