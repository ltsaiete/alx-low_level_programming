#include "search_algos.h"

int _advanced_binary(int *array, int value, size_t start, size_t end);

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm to  find the index of the first value in the
 * array
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (_advanced_binary(array, value, 0, size));
}

/**
 * _advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @start: index to start searching from
 * @end: index to stop searching
 *
 * Return: the first index where value is located
 */

int _advanced_binary(int *array, int value, size_t start, size_t end)
{
	size_t i, mid;

	if (start < end - 1)
	{

		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			if (i < end - 1)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		mid = (start + end) / 2;

		if (array[mid] < value)
			return (_advanced_binary(array, value, mid, end));
		else if (array[mid] > value)
			return (_advanced_binary(array, value, start, mid));
		else
			return (mid);
	}

	return (-1);
}
