#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: the head node
 *
 * Return: the head node’s data (n).
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	temp = NULL;
	return (n);
}
