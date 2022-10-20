#include "main.h"

/**
 * alloc_grid - Entry point
 *
 * @width : integer
 * @height : integer
 *
 * Description: 'returns a pointer to a 2 dimensional array of integers.'
 *
 * Return: int[][]
 */
int **alloc_grid(int width, int height)
{
	int **array, *array2, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(*array2) + 1);

	if (array == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2 = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			array2[j] = 0;
		array[i] = array2;
	}

	return (array);
}
