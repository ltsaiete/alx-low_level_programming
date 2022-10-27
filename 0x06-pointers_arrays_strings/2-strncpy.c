#include "main.h"
#include <string.h>

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
	int len = strlen(src);

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
