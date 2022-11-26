#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of n2 to concatenate
 *
 * Return - the concatenation of the strings
 * NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1len, s2len, i;

	s1len = strlen(s1);
	s2len = strlen(s2);

	str = malloc(sizeof(s1) * s1len + sizeof(s2) * n);
	if (str == NULL)
	{
		return (NULL);
	}

	if (n >= s2len)
	{
		n = s2len;
	}
	str = s1;

	for (i = 0; i < n; i++)
	{
		str[s1len + i] = s2[i];
	}

	return (str);
}
