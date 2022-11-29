#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: our listint_t list
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	_putnumber(h->n);
	_putchar('\n');
	return (1 + print_listint(h->next));
}

/**
 * _putnumber - writes the character c to stdout
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putnumber(int n)
{
	char buffer[15];
	int lengthUsed = sprintf(buffer, "%d", n);

	return (write(1, buffer, lengthUsed));
}
