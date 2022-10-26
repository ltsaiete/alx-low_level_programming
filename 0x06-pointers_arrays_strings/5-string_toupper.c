#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - concatenates two strings.
 * @s: Function argument
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		*(s + i) = toupper(*(s + i));
	}

	return (s);
}
