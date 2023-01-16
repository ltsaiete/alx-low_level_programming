#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string
 * @accept: the character
 *
 * Return: a pointer to the first occurrence
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count = 0;

	while (*s != '\0' && *s != ' ')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}

			i++;
		}
		s++;
	}

	return (count);
}
