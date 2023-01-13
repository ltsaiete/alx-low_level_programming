#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _create_dlist - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
dlistint_t *_create_dlist(unsigned int n, ...)
{
	va_list args;
	dlistint_t *list;
	dlistint_t *tmp;
	dlistint_t *prev;
	unsigned int i;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->n = va_arg(args, int);
		tmp->prev = prev;
		tmp->next = NULL;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *list;
	size_t n;

	list = _create_dlist(1, 9);
	n = print_dlistint(list);
	printf("-> %lu elements\n", n);
	free_dlistint(list);
	return (0);
}
