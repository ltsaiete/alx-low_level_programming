#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * The function sets the head to NULL
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			free(temp);
			temp = temp->next;
		}
		*head = NULL;
		free(*head);
	}
	else
	{
		free(*head);
	}
}
