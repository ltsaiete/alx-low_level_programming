#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the head of the list
 *
 * Return:  the address of the new element, or NULL if it failed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
