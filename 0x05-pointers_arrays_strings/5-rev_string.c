#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char rev[len];
	int count;

	for (i = len - 1; i >= 0; i--)
	{
		rev[count] = *(s + i);
		count++;
		
	}
	printf(rev);
}
