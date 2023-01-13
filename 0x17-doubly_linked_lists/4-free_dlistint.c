#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head node of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	if (head == NULL)
	{
		return;
	}
	else if (head->next == NULL)
	{
		free(head);
		return;
	}
	else
	{
		temp = head;

		while (temp != NULL)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
		head = NULL;
	}
}
