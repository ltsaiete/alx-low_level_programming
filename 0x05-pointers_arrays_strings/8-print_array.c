#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: parameter
 * @n: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
