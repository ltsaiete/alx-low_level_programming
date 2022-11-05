#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: function argument
 * @src: function argument
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i = 0;

	for (; *src != '\0'; src++)
	{
		*(dest + i + len) = *(src);
		i++;
	}
	*(dest + i + len) = '\0';
	return (dest);
}
