#include "main.h"
#include <string.h>

/**
 * puts2 - Entry point
 * @str: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
