#include <stdlib.h>

/**
 * alloc_grid - Allocates memory to a matrix and initializes with 0
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: a pointer to the matrix
 *
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **mat = malloc(sizeof(int) * height);
	int i, j;

	for (i = 0; i < height; i++)
		mat[i] = malloc(sizeof(int) * width);

	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}

	return (mat);
}
