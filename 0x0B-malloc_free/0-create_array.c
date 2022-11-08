#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars
 * @size: Size of the array
 * @c: the initial char
 *
 * Return: a pointer to the array or NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
