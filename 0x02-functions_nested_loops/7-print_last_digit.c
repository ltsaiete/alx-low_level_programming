#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l + '0');
	return (l);
}
