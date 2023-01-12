#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head node of the list
 * Return: he number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	int count = 0;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (0);
	}
	temp->n = h->n;
	temp->next = h->next;
	temp->prev = h->prev;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	temp = NULL;
	free(temp);
	return (count);
}
