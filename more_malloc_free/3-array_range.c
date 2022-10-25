#include "main.h"

/**
 * array_range - Entry point
 *
 * @min : integer
 * @max : integer
 *
 * Return: integer[].
 */
int *array_range(int min, int max)
{
	int *array, i, e;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == 0)
		return (NULL);

	for (i = min, e = 0; i <= max; i++)
		array[e++] = i;

	return (array);
}
