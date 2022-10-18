#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h = 0;
	int min;
	int div;
	int rem;

	while (h < 24)
	{
		min = 0;

		while (min < 60)
		{
			div = h / 10;
			rem = h % 10;
			_putchar(div + '0');
			_putchar(rem + '0');

			_putchar(':');
			
			div = min / 10;
			rem = min % 10;
			_putchar(div + '0');
			_putchar(rem + '0');

			_putchar('\n');
			min++;
		}
		h++;
	}
}
