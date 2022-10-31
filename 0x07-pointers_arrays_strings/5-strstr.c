#include <string.h>
#include <stdio.h>

/**
 * _strstr - gets the length of a prefix substring.
 * @haystack: The string
 * @needle: the character
 *
 * Return: a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *ch = NULL;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			i = 0;
			ch = haystack;
			while (needle[i] != '\0')
			{
				if (haystack[i] != needle[i])
				{
					ch = NULL;
					break;
				}

				i++;
			}
			break;
		}

		haystack++;
	}

	return (ch);
}
