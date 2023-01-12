#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head node of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next;

	while (temp->next != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	free(temp);
	head = NULL;
}
