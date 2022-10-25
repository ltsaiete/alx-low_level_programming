#include "main.h"
#include <string.h>

/**
 * rev_string - Entry point
 * @s: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int i;
	char aux;

	for (i = len; i >= len / 2; i--)
	{
		aux = *(s + len - i);
		*(s + len - i) = *(s + i);
		*(s + i) = aux;
	}
}
