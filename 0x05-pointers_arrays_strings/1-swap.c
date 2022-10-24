#include "main.h"

/**
 * swap_int - Entry point
 * @a: parameter
 * @b: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
