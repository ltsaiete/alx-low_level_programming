#include "main.h"

/**
 * _isdigit - Entry point
 * @c: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
