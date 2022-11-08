#include <stdlib.h>
#include <string.h>

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
	if (str == NULL)
		return (NULL);

	unsigned int size = strlen(str);
	char *newStr = malloc(sizeof(char) * size);
	int i = 0;

	if (newStr == NULL)
		return (NULL);

	while (i < size)
	{
		newStr[i] = str[i];
		i++;
	}

	return (newStr);
}
