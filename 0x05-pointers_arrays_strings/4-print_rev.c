#include "main.h"
#include <string.h>

/**
 * void print_rev - Entry point
 * @s: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
