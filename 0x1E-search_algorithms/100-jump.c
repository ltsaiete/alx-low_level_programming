#include "search_algos.h"
#include "math.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t i = 0, j;

	if (array == NULL || size == 0)
		return (-1);

	do {
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i += step;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
			for (j = i - step; j < i + 1; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					return (j);
				}
			}
			return (-1);
		}

	} while (i < size);

	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);

	return (-1);
}
