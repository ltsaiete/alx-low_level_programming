#include "search_algos.h"
#include "math.h"

listint_t *jump_nodes(listint_t *node, size_t step);

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm.
 *
 * @list: a pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 *
 * Return:  pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = sqrt(size);
	listint_t *current = list, *previous;

	if (list == NULL)
		return (NULL);

	while (current->index < size)
	{
		if (current->n < value)
		{
			printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
			previous = current;
			current = jump_nodes(current, step);
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
						 previous->index, current->index);

			while (previous->index < current->index)
			{
				printf("Value checked at index [%ld] = [%d]\n",
							 previous->index, previous->n);

				if (previous->n == value)
					return (previous);

				previous = previous->next;
			}
			return (NULL);
		}
	}

	return (NULL);
}

/**
 * jump_nodes - jumps step nodes in a list
 * @node: node to start jumping from
 * @step: jump step
 *
 * Return: void
 */

listint_t *jump_nodes(listint_t *node, size_t step)
{
	while (step > 0)
	{
		node = node->next;
		step--;
	}
	return (node);
}
