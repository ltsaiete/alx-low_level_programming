#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n = "10";
	char *m = "89";
	char r[4];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 4);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}
