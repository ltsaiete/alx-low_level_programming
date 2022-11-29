#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head node of the list
 * @idx: is the index of the list where the new node should be added.
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = NULL;

	idx--;
	while (idx > 0 && temp->next != NULL)
	{
		temp = temp->next;
		idx--;
	}

	if (idx > 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
