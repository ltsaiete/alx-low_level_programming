#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node of the list
 * @index: index of the element
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}

	if (index == 0)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
