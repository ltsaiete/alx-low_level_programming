#include "main.h"
#include <string.h>

/**
 * _strlen - Entry point
 * @s: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
