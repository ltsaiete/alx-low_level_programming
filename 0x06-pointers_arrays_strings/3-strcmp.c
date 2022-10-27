#include "main.h"
#include <string.h>

/**
 * _strcmp - concatenates two strings.
 * @s1: function argument
 * @s2: function argument
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
	{
		res = *s1 - *s2;
	}

	return (res);
}
