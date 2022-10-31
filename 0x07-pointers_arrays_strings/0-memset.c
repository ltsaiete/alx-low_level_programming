#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: a pointer to the memory area
 * @b: the constant byte
 * @n: number of bytes to fill
 *
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}

	return (s);
}
