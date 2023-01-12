#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Head node of the list
 *
 * Return: number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (0);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (0);

	temp->n = h->n;
	temp->prev = h->prev;
	temp->next = h->next;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	temp = NULL;
	free(temp);
	return (count);
}
