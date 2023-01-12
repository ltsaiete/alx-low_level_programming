#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head node of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
	head = NULL;
}
