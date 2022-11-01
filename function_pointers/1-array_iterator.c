#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * @array: integer[]
 * @size: integer
 * @action: integer
 *
 * Description: 'print array.'
 *
 * Return: void
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
