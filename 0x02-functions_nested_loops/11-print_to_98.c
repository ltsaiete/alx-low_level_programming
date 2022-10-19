#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	} else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
