#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int ascii;

	while (*s != '\0')
	{
		ascii = *s;

		if (((ascii - 65 + 13) < 26) || ((ascii - 97 + 13) < 26))
		{
			ascii += 13;

			*s = ascii;
		}

		s++;
	}

	return (s);
}
