#include "main.h"
#include <stdio.h>

/**
 * reverse_array - concatenates two strings.
 * @a: function argument
 * @n: function argument
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		*(a + i) += *(a + n);
		*(a + n) = *(a + i) - *(a + n);
		*(a + i) -= *(a + n);
	}
}
