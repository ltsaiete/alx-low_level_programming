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

	if (s1 == NULL && s2 == NULL)
	{
		str = "";
		return (str);
	}

	s1len = strlen(s1);
	s2len = strlen(s2);

	str = malloc(sizeof(char) * s1len + sizeof(char) * n + sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	strcat(str, s1);

	for (i = 0; i < n && i < s2len; i++)
	{
		str[s1len + i] = s2[i];
	}
	str[s1len + i] = '\0';

	return (str);
}
