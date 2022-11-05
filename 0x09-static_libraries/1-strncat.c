#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: function argument
 * @src: function argument
 * @n: function argument
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*(dest + i + len) = *src;
		src++;
	}

	*(dest + i + len) = '\0';

	return (dest);
}
