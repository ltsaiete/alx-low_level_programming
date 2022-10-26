#include "main.h"
#include <string.h>

/**
 * _strcmp - concatenates two strings.
 * @s1: function argument
 * @s2: function argument
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int ret = 0;

	if (len1 > len2)
	{
		ret = 15;
	}

	if (len1 < len2)
	{
		ret = -15;
	}

	return (ret);
}
