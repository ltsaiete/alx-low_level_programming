#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars
 * @size: Size of the array
 * @c: the initial char
 *
 * Return - a pointer to the array or NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *str;
	if (str == NULL)
		return (NULL);

	str = malloc(sizeof(char) * size);
	str[0] = c;

	return (str);
}
