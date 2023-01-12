#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: head node of the list
 * @n: data for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;

		return (*head);
	}

	new = malloc(sizeof(dlistint_t));
	temp = malloc(sizeof(dlistint_t));
	if (new == NULL || temp == NULL)
		return (NULL);

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	new->n = n;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;

	temp = NULL;
	free(temp);

	return (new);
}
