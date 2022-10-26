#include "main.h"
#include <stdio.h>

/**
 * _strcmp - concatenates two strings.
 * @s1: function argument
 * @s2: function argument
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	n--;

	for (i = 0; i - 1 < (n / 2); i++)
	{
		printf("%d  %d, ", i, n - i);
		*(a + i) += *(a + n - i);
		*(a + n - i) = *(a + i) - *(a + n - i);
		*(a + i) -= *(a + n - i);
	}
	printf("\n");

	for (; *a != '\0'; a++)
	{
		printf("%d, ", *a);
	}
	printf("\n");
}
