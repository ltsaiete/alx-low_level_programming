#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: The string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL
 */

char *_strchr(char *s, char c)
{
	char *ch = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			ch = s;
			break;
		}

		s++;
	}

	return (ch);
}
