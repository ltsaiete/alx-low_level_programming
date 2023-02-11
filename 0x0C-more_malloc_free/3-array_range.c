#include "main.h"

/**
 * array_range - creates an array of integers.
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 *
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int count;
	int *arr, i;

	if (min > max)
		return (NULL);

	count = max - min + 1;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count && min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
