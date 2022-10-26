#include "main.h"

/**
 * _strncpy - concatenates two strings.
 * @dest: function argument
 * @src: function argument
 * @n: function argument
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
