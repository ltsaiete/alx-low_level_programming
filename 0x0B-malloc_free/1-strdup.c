#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str.
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicate string
 *
 */

char *_strdup(char *str)
{
	int size;
	char *newStr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);
	newStr = malloc(sizeof(char) * size + 1);

	if (newStr == NULL)
		return (NULL);

	while (i < size)
	{
		newStr[i] = str[i];
		i++;
	}
	newStr[i] = '\0';

	return (newStr);
}
