#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - concatenates two strings.
 * @s: Function argument
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		*(s + i) = toupper(*(s + i));
	}

	return (s);
}
