#include "main.h"

/**
 * free_grid - Entry point
 *
 * @grid : int[][]
 * @height : integer
 *
 * Description: 'frees a 2 dimensional grid.'
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
			free(grid[height--]);
		free(grid);
	}
}
