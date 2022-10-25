#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Entry point
 * @dest: parameter
 * @src: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *src != 0; src++)
	{
		*(dest + i) = *src;
		i++;
	}
	return (dest);
}
