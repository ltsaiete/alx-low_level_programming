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
	*s = toupper(*s);

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == ' '
		|| *(s + i) == '\n'
		|| *(s + i) == '\t'
		|| *(s + i) == ','
		|| *(s + i) == ';'
		|| *(s + i) == '.'
		|| *(s + i) == '!'
		|| *(s + i) == '?'
		|| *(s + i) == '"'
		|| *(s + i) == '('
		|| *(s + i) == ')'
		|| *(s + i) == '{'
		|| *(s + i) == '}')
		{
			*(s + i + 1) = toupper(*(s + i + 1));
		}
	}

	return (s);
}
