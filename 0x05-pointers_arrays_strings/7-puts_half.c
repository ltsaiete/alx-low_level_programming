#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int half = (len + 1) / 2;

	for (str += half; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
