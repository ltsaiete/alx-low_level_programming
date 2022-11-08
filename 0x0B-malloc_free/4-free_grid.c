#include <stdlib.h>

/**
 * free_grid - frees memory allocated by grid
 * @height: height of the matrix
 * @grid: the grid
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	free(grid);
}
