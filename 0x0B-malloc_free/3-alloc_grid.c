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
	int **mat;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc(sizeof(int) * height);
	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(sizeof(int) * width);
		if (mat[i] == NULL)
		{
			free(mat);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}

	return (mat);
}
