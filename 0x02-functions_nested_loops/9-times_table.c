#include "main.h"

/**
 * times_table - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i = 0;
	int j;
	int mult;
	int div;
	int rem;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			mult = i * j;
			div = mult / 10;
			rem = mult % 10;

			if (rem >= 0 && div == 0)
			{
				_putchar(rem + '0');
			} else
			{
				_putchar(div + '0');
				_putchar(rem + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if(mult <= 9)
				{
					_putchar(' ');
				}	
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
