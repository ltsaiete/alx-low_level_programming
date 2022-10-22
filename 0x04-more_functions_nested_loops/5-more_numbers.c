#include "main.h"

/**
 * more_numbers - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n, i;
	int n1, n2;

	for (i = 0; i < 10; i++)
	{
		n = 0;
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
}
