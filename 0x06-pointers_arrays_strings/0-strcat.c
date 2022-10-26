#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(src);
	int i = 0;

	for (; *src != 0; src++)
	{
		*(dest + i + len) = *(src + i);
		i++;
	}

	printf("%s\n", dest);

	return (dest);
}
