#include "main.h"

#include <ctype.h>

/**
 * leet - concatenates two strings.
 * @s: Function argument
 * Return: Always 0.
 */

char checkChar(char ch)
{
	int i = 0;
	char a1[] = {'4', '3', '0', '7', '1'};
	char a2[] = {'A', 'E', 'O', 'T', 'L'};
	char a3[] = {'a', 'e', 'o', 't', 'l'};

	do
	{
		if (ch == a2[i] || ch == a3[i])
			ch = a1[i];

		i++;
	} while (i < 5);

	return (ch);
}

char *leet(char *s)
{
	int i = 0;
	char ch;

	do
	{
		ch = s[i];
		s[i] = checkChar(ch);
		i++;
	} while (s[i] != '\0');

	return (s);
}
