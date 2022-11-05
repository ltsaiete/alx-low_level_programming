#include <string.h>

/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: The string
 * @accept: the character
 *
 * Return: a pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *ch = NULL;

	while (*s != '\0' && ch == NULL)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				ch = s;
				break;
			}

			i++;
		}
		s++;
	}

	return (ch);
}
