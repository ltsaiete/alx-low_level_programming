#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int ascii, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		ascii = s[i];

		if (ascii >= 65 && ascii <= 90)
		{
			ascii = ((ascii - 65 + 13) % 26) + 65;
		}
		else if (ascii >= 97 && ascii <= 122)
		{
			ascii = ((ascii - 97 + 13) % 26) + 97;
		}

		s[i] = ascii;
	}

	return (s);
}
