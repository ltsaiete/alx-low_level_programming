#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list.
 * The function sets the head to NULL
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		free(*head);
		temp = temp->next;
		*head = temp;
	}
}
