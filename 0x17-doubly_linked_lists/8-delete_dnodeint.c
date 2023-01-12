#include "lists.h"

/**
 * delete_dnodeint - deletes the node at index index of a dlistint_t linked list.
 * @head: head node of the list
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;

	if (index == 0)
	{
		if (*head != NULL)
		{
			temp = *head;
			if (temp->next != NULL)
				temp->next->prev = NULL;
			*head = temp->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	temp = malloc(sizeof(dlistint_t));
	temp2 = malloc(sizeof(dlistint_t));
	if (temp == NULL || temp2 == NULL)
		return (-1);

	temp = *head;
	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (index == 0)
	{
		temp2 = temp->prev;
		if (temp->next != NULL)
		{
			temp2->next = temp->next;
			temp->next->prev = temp2;
		}

		free(temp);
		temp = NULL;
		temp2 = NULL;
		free(temp2);
		return (1);
	}
	else
	{
		return (-1);
	}
}
