#include "main.h"

/**
 * print_digit - print digits
 * @mult: argument
 * @p1: argument
 * @p2: argument
 * @p3: argument
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_digit(int mult, int p1, int p2, int p3)
{
	if (mult < 10)
	{
		_putchar(p3 + '0');
	}
	else if (mult < 100)
	{
		_putchar(p2 + '0');
		_putchar(p3 + '0');
	}
	else
	{
		_putchar(p1 + '0');
		_putchar(p2 + '0');
		_putchar(p3 + '0');
	}
}

/**
 * print_spaces - print spaces
 * @j: argument
 * @i: argument
 * @n: argument
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */
void print_spaces(int j, int i, int n)
{
	if (j < n)
	{
		_putchar(',');
		_putchar(' ');
		if ((i * (j + 1)) < 100)
		{
			_putchar(' ');
		}
		if ((i * (j + 1)) < 10)
		{
			_putchar(' ');
		}
	}
}

/**
 * print_times_table - Entry point
 * @n: argument
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int mult;
	int rem;
	int p1, p2, p3;

	if (n <= 15 && n >= 0)
	{

		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				mult = i * j;
				p1 = mult / 100;
				rem = mult % 100;
				p2 = rem / 10;
				p3 = rem % 10;

				print_digit(mult, p1, p2, p3);
				print_spaces(j, i, n);

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
