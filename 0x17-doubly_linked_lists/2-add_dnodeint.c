#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head node of the list
 * @n: data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	new->prev = NULL;
	new->n = n;
	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}

	new->next = temp;
	temp->prev = new;
	*head = new;

	temp = NULL;
	free(temp);
	new = NULL;
	free(new);

	return (*head);
}
