#include <stdlib.h>
#include <string.h>

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
	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	unsigned int size = strlen(s1) + strlen(s2);
	char *str = malloc(sizeof(char) * size);
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (i < strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}

	while (i < size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	return (str);
}
