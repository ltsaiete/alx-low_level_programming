#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: args count
 * @av: args array
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, len = 0;
	char *s;

	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	s = malloc((len + ac) * sizeof(char));

	if (s == NULL)
		return (NULL);

	s[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(s, av[i]);
		strcat(s, "\n");
	}

	return (s);
}
