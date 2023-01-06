#include "search_algos.h"

/**
 * print_array - print array
 * @array: list of integers
 * @start: integer
 * @final: integer
 */
void print_array(int *array, int start, int final)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i <= final; i++)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	putchar('\n');
}

/**
 * exponential_search - search function
 * @array: list of integer
 * @size: size_t
 * @value: target
 * Return: integer
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low, high, mid;

	if (size == 0 || array == NULL || array[0] > value)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
