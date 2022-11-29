#include "lists.h"
/**
 * delete_nodeint_at_index -   deletes the node at index
 * index of a listint_t linked list.
 * @head: head node of the list
 * @index: is the index of the list where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *aux = NULL;

	index--;
	while (index > 0 && temp->next != NULL)
	{
		temp = temp->next;
		*head = temp;
		index--;
	}

	if (index > 0)
	{
		return (-1);
	}

	aux = temp;
	*head = aux->next;
	aux = NULL;
	free(aux);
	return (1);
}
