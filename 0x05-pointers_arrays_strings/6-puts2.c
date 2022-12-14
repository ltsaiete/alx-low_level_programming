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
	int i = 0;

	for (; *str != '\0'; str++)
	{
		if (i % 2 == 0)
			_putchar(*str);

		i++;
	}
	_putchar('\n');
}
