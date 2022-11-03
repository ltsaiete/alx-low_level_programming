#include <string.h>

/**
 * _is_palindrome - prints a string
 * @s: the string to print
 * @pos: position
 * @len: length
 *
 * Return: void
 */

int _is_palindrome(char *s, int pos, int len)
{

	if (*(s + pos) != *(s + len))
	{
		return (0);
	}

	if (len == 1)
	{
		return (1);
	}

	return (_is_palindrome(s, pos + 1, len - 1));
}
/**
 * is_palindrome - prints a string
 * @s: the string to print
 *
 * Return: void
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	len--;

	return (_is_palindrome(s, 0, len));
}
