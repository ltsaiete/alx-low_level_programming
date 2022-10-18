#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int res;

	if (islower(c) == 0)
	{
		res = 0;
	} else
	{
		res = 1;
	}
	return (res);
}
