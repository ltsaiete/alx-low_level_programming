#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * @c: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	int res;

	if (isalpha(c) == 0)
	{
		res = 0;
	} else
	{
		res = 1;
	}
	return (res);
}
