#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: The beginning of the list
 * @n: the data for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *aux = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	aux = *head;

	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	aux->next = new;

	return (new);
}
