#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: The string
 * @c: the character
 *
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	char *ch = NULL;

	if (c == '\0')
	{
		ch = (s + strlen(s));
	}

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
