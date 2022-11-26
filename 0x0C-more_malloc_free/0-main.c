#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%lu\n", sizeof(c));
	printf("%p\n", c);
	free(c);
	return (0);
}
