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
	*s = toupper(*s);

	for (; *s != '\0'; *s++)
	{
		if (*s == ' '
		|| *s == '\n'
		|| *s == '\t'
		|| *s == ','
		|| *s == ';'
		|| *s == '.'
		|| *s == '!'
		|| *s == '?'
		|| *s == '"'
		|| *s == '('
		|| *s == ')'
		|| *s == '{'
		|| *s == '}')
		{
			*(s + 1) = toupper(*(s + 1));
		}
	}

	return (s);
}
