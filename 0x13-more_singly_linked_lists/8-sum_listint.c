#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data of a listint_t linked list.
 * @head: head node of the list
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return ((head->n) + sum_listint(head->next));
}
