#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
