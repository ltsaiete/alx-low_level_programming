#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head node of the list
 * @idx:  index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new;

	if (idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (*h);
	}
	else if (*h == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(dlistint_t));
	temp2 = malloc(sizeof(dlistint_t));
	new = malloc(sizeof(dlistint_t));
	if (temp == NULL || temp2 == NULL || new == NULL)
		return (NULL);

	temp = *h;
	while (idx > 1 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}
	new->n = n;

	if (idx == 1)
	{
		temp2 = temp->next;
		temp->next = new;
		temp2->prev = new;
		new->next = temp2;
		new->prev = temp;
		temp = NULL;
		temp2 = NULL;
		free(temp);
		free(temp2);
		return (new);
	}
	else
	{
		return (NULL);
	}
}
