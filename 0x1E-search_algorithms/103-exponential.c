#include "search_algos.h"

int _binary_search(int *array, int value, size_t left, size_t right);

/**
 * exponential_search -  searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size)
	{
		if (array[bound] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, bound);
			return (_binary_search(array, value, (bound / 2), bound));
		}
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);

		bound *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, size - 1);
	return (_binary_search(array, value, (bound / 2), size - 1));

	return (-1);
}

/**
 * _binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @left: index to start searching from
 * @right: index to stop searching
 *
 * Return: the first index where value is located
 */

int _binary_search(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		mid = (right + left) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
