#include <stdlib.h>

/**
 * free_grid - frees memory allocated by grid
 * @height: height of the matrix
 * @grid: the grid
 *
 * Return: void
 *
 */

void free_grid(int **grid, int __attribute__((__unused__)) height)
{
	free(grid);
}
