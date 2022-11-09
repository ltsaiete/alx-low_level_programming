#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: combination of the two strings
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;
	int s1len = 0;
	int s2len = 0;

	if (s1 != NULL)
	{

		s1len += strlen(s1);
	}

	if (s2 != NULL)
	{
		s2len += strlen(s2);
	}

	str = malloc(sizeof(char) * s1len + sizeof(char) * s2len);

	if (str == NULL)
		return (NULL);

	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < s2len)
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	return (str);
}
