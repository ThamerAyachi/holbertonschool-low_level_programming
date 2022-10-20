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
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(grid[j]);

			free(grid);
		}
	}
}
