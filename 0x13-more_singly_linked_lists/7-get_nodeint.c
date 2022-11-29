#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: head node of the list
 * @index: is the index of the node, starting at 0
 *
 * Return:  the nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	while (count < index && head->next != NULL)
	{
		head = head->next;
		count++;
	}

	if (count < index)
	{
		return (NULL);
	}

	return (head);
}
