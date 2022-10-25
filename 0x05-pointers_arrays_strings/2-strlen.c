#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
=======

>>>>>>> 264f91a26c74bdaec727ab5e44e2d13cc7ce12e0
/**
 * _strlen - Entry point
 * @s: parameter
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
