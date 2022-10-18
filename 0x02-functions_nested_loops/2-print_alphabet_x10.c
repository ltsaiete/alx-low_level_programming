#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
